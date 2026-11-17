# >>> xmake >>>
if (Test-Path -Path "D:\Scoop\apps\xmake\current\scripts\profile-win.ps1" -PathType Leaf) {
    . "D:\Scoop\apps\xmake\current\scripts\profile-win.ps1"
}
# <<< xmake <<<

if (Get-Command task -ErrorAction SilentlyContinue) {
    # 让 Task 命令使用 UTF-8 编码，保证命令的正确补全，补全时临时切换编码，finally 确保出错时也恢复原编码。
    $taskCompletion = (& task --completion powershell | Out-String).Replace(
        '$output = & $TaskExe __complete @argsToPass 2>$null',
        '$savedEncoding = [Console]::OutputEncoding; try { [Console]::OutputEncoding = [System.Text.UTF8Encoding]::new(); $output = & $TaskExe __complete @argsToPass 2>$null } finally { [Console]::OutputEncoding = $savedEncoding }'
    )
    Invoke-Expression $taskCompletion
}
