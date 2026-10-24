# GitHub 设置待办（需要网页访问，暂时做不了）

当前网络环境：`github.com` 网页（443）被阻断，`api.github.com` 和 SSH 正常。
所以「推代码」不受影响，但「改仓库设置」必须等能打开网页时再做。

## 1. 改仓库名 ✅ 已完成（2026-10-24）

`personal-blog` → **`learning-notes`**，本地 remote 已同步为新地址。

## 2. 补仓库信息 ✅ 已完成（2026-10-24）

- 位置：仓库首页右侧 **About** 旁的齿轮
- Description：`高校学习笔记：C / Python / 瑞萨 RA4M1`
- Topics：`c`、`python`、`renesas`、`ra4m1`、`learning-notes`

## 3. 保护 main 分支

- 位置：**Settings** → Branches → **Add branch protection rule**
- Branch name pattern：`main`
- 勾选 **Require status checks to pass before merging**
- ⚠️ 不要勾 **Require a pull request before merging**，否则自己也没法直接 push 到 main
- 搜索并选中 **`build`**（workflow 叫 CI，job id 是 build，GitHub 用的是 job 名）
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
