# CodingEveryday
leetcode
## git上传
git add .<br>
git commit -m "test"<br>
git push -u origin master<br>

* 解决ssh: connect to host ssh.github.com port 443: Connection timed out错误

代理问题

控制面板->网络和Internet->Internet选项->连接->局域网设置->勾选自动检测设置，取消为LAN使用代理服务器

然后就可以push了

* 解决error: failed to push some refs to 'github.com:Jessica-xyx/CodingEveryday.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.

git pull --rebase origin master

git push -u origin master