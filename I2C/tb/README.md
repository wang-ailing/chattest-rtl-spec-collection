# I2C Testbench

原项目 I2C 主机 TB 及总线、从机模型

原配置另有 vlog_tb_utils、wiredelay 等依赖，需配套原项目工程。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [upstream/bench/verilog/i2c_slave_model.v](upstream/bench/verilog/i2c_slave_model.v) | [上游原文](https://raw.githubusercontent.com/freecores/i2c/3b067f00ccced753b0502024766a51f58f3e04bc/bench/verilog/i2c_slave_model.v) |
| [upstream/bench/verilog/tst_bench_top.v](upstream/bench/verilog/tst_bench_top.v) | [上游原文](https://raw.githubusercontent.com/freecores/i2c/3b067f00ccced753b0502024766a51f58f3e04bc/bench/verilog/tst_bench_top.v) |
| [upstream/bench/verilog/wb_master_model.v](upstream/bench/verilog/wb_master_model.v) | [上游原文](https://raw.githubusercontent.com/freecores/i2c/3b067f00ccced753b0502024766a51f58f3e04bc/bench/verilog/wb_master_model.v) |
| [upstream/i2c.core](upstream/i2c.core) | [上游原文](https://raw.githubusercontent.com/freecores/i2c/3b067f00ccced753b0502024766a51f58f3e04bc/i2c.core) |
| [upstream/sim/i2c_verilog/run/run](upstream/sim/i2c_verilog/run/run) | [上游原文](https://raw.githubusercontent.com/freecores/i2c/3b067f00ccced753b0502024766a51f58f3e04bc/sim/i2c_verilog/run/run) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
