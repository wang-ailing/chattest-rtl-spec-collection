# Elliptic_Curve Testbench

原项目点加和标量乘自检 TB

包含 test_point_add.v 和 test_point_scalar_mult.v，自检向量在 TB 中。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [COPYING.LESSER.txt](COPYING.LESSER.txt) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/testbench/COPYING.LESSER.txt) |
| [Read_Me.txt](Read_Me.txt) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/testbench/Read_Me.txt) |
| [simulation.do](simulation.do) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/testbench/simulation.do) |
| [test_point_add.v](test_point_add.v) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/testbench/test_point_add.v) |
| [test_point_scalar_mult.v](test_point_scalar_mult.v) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/testbench/test_point_scalar_mult.v) |
| [licenses/ecg/COPYING.LESSER.txt](licenses/ecg/COPYING.LESSER.txt) | [上游原文](https://raw.githubusercontent.com/freecores/ecg/52dee5f8b3ed18715dff2bd9e1d8fe1ebb75b82a/rtl/COPYING.LESSER.txt) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
