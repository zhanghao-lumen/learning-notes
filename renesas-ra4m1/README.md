# Renesas RA4M1

开发板：RA4M1（Cortex-M4F，48MHz，USB、CAN、12 位 ADC、DAC）。

## 工具与资料

- FSP（Flexible Software Package）：`renesas/fsp`，代码在 `ra/fsp/`，API 文档看 `ra/fsp/inc/` 的头文件注释
- 官方例程：`renesas/ra-fsp-examples` 的 `example_projects/ek_ra4m1/`（adc / agt / can / dma_spi / i2c …）
- 这些仓库都几百 MB 到 2.6 GB，**不要整包 clone**，用 `../ghfetch.sh ls` + `file` 按需取

## 路线

| 阶段 | 目标 | 关键外设 |
|---|---|---|
| 1 | 点灯 / 按键 | GPIO、PORT |
| 2 | 定时闪烁、呼吸灯 | GPT、PWM |
| 3 | 串口打印、和电脑对话 | SCI(UART) |
| 4 | 读电压、读传感器 | ADC12、DAC12 |
| 5 | 接模块（OLED、EEPROM） | I2C、SPI |
| 6 | 中断优先级、任务调度 | ICU、FreeRTOS |

## 笔记

实验记录放 `docs/lab-NN-主题.md`，写清：接线、FSP 配置项、现象、坑。
