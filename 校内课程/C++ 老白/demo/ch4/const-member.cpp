/* 
 * Copyright (c) 2023 白忠建 电子科技大学信息与软件工程学院
 * 现代C++程序设计课程源码及其构建系统 is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2. 
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2 
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details. 
 */


//bzj^_^
//const-member.cpp

#include <iostream>

class X {
private:
    const int a;
    const int c{1};
    int b;

public:
    X(int i, int j) : a(i), b(j) {}
    const int& getA() { return a; }
    int& getB() { return b; }
};

int main() {
    X x{1, 2};

    ++x.getB();
    std::cout << x.getA() << ' ' << x.getB();

    return 0;
}
