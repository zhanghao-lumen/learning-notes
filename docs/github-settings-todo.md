# GitHub 设置待办（需要网页访问，暂时做不了）

当前网络环境：`github.com` 网页（443）被阻断，`api.github.com` 和 SSH 正常。
所以「推代码」不受影响，但「改仓库设置」必须等能打开网页时再做。

## 1. 改仓库名

`personal-blog` 这个名字已经和内容（学习笔记）不匹配了。

- 位置：仓库页 → **Settings** → General → **Repository name**
- 改成：`learning-notes`
- 点 **Rename**。GitHub 会自动把旧地址重定向到新地址，本地 remote 不用改。

## 2. 补仓库信息

- 位置：仓库首页右侧 **About** 旁的齿轮
- Description：`高校学习笔记：C / Python / 瑞萨 RA4M1`
- Topics：`c`、`python`、`renesas`、`ra4m1`、`learning-notes`

## 3. 保护 main 分支

- 位置：**Settings** → Branches → **Add branch protection rule**
- Branch name pattern：`main`
- 勾选 **Require status checks to pass before merging**
- 搜索并选中 `CI`
- 保存

## 4. （可选）删除归档标签

旧历史备份在标签 `archive-2026-10-24`，确认不需要回滚后可以删：

```bash
git push origin --delete archive-2026-10-24
```

## 怎么先拿到网页访问

1. **手机浏览器 + 移动流量**（不用装 App，关掉 Wi-Fi 用 4G/5G 打开 github.com）
2. **电脑连手机热点**（走运营商网络，很多情况下能打开）
3. 等以后有代理/VPN 时再做

只要其中一种能打开 github.com，上面三步在手机上点完就行，不需要 token。
