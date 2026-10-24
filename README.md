# learning-notes

> 一个大学生的 C / Python / Renesas RA4M1 / 课程基础 学习记录。

这个仓库不追求「完整教程」，只记录**我自己写过的代码和踩过的坑**：每条线一个目录，
每学一课补一个小程序 + 一段笔记，错了就改，改不动就留着当反例。

## 目录

| 目录 | 内容 |
|---|---|
| `python/` | Python 入门练习（教材：walter201230/Python） |
| `c/` | C 语言练习（教材：CNote + ProgrammingInC） |
| `renesas-ra4m1/` | 瑞萨 RA4M1 单片机（FSP + 官方例程） |
| `courses/` | 大学课程笔记（操作系统、网络、数据结构） |
| `docs/study-log.md` | 每次学习的记录，一次一行 |

## 怎么跑

```bash
make py     # 运行 Python 示例
make c      # 编译并运行 C 示例
make clean  # 清理编译产物
```

环境：macOS + Apple clang（`cc`）+ Python 3.14。

## 学习进度

- [ ] C：流程控制 → 数组 → 指针 → 结构体 → 文件
- [ ] Python：基础语法 → 函数 → 类 → 文件/异常 → 常用库
- [ ] RA4M1：GPIO 点灯 → 定时器/PWM → UART → ADC → I2C/SPI → 中断/RTOS
- [ ] 课程：按学期推进，笔记进 `courses/`

## License

[MIT](LICENSE)
