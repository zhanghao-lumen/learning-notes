# learning-notes

> 一个大学生的 C / Python / Renesas RA4M1 / 课程基础 学习记录。

不追求「完整教程」，只记录**自己写过的代码和踩过的坑**：每条线一个目录，每学一课补一个
小程序 + 一段笔记。错了就改，改不动就留着当反例。

```
.
├── python/             Python 入门练习
├── c/                  C 语言练习
├── renesas-ra4m1/      瑞萨 RA4M1 单片机
├── courses/            大学课程笔记
├── docs/study-log.md   学习日志（一次一行）
├── Makefile            make py / make c / make clean
└── .github/workflows/  CI：每次 push 自动跑一遍示例
```

## 怎么跑

```bash
make py     # 运行 Python 示例
make c      # 编译并运行 C 示例
make clean  # 清理编译产物
```

环境：macOS / Linux + `cc`（clang 或 gcc）+ Python 3.10 以上。提交前 CI 会再跑一遍，
红了就说明有示例跑不通。

## 学习进度

| 线 | 进度 |
|---|---|
| C | 课 0 ✅ Hello World ｜ 课 1–6 待开始 |
| Python | 课 0–1 ✅ 打印/输入/类型转换 ｜ 课 2–7 待开始 |
| RA4M1 | 待开始（路线见 `renesas-ra4m1/README.md`） |
| 课程 | 待开始（索引见 `courses/README.md`） |

## 约定

- 一个提交说清一件事，提交信息前缀用 `feat / fix / docs / chore / ci`
- 新练习放对应目录的 `basics/` 或 `lab-NN-主题/` 下，并在该目录 README 的表格里勾掉一行
- 学习日志记「卡在哪」，不记流水账

## License

[MIT](LICENSE)
