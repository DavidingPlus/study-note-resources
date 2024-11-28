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
//thread.cpp

#include <iostream>
#include <thread>

void f() {
    for (int i = 0; i <= 100; ++i)
        std::cout << i << ' ' ;
}

int main() {
    std::thread t(f);
    t.detach(); //如果没有join，程序会因主线程先于子线程t结束，析构还在运行线程对象t，从而导致异常
    std::cout << "\nmain() terminated." << std::endl;
    return 0;
}