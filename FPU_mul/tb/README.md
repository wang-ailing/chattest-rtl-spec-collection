# FPU_mul Testbench

原项目流水乘法器单元 TB

对应 double_fpu/pipeline/fpu_mul.v；不可与非流水 FPU 顶层 TB 混用。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [double_fpu_pipeline/fpu_mul_TB.v](double_fpu_pipeline/fpu_mul_TB.v) | [上游原文](https://raw.githubusercontent.com/freecores/double_fpu/cf173d0b7cc13f0ec367c07f8b322850a1428c74/pipeline/fpu_mul_TB.v) |
| [double_fpu_pipeline/fpu_mul.v](double_fpu_pipeline/fpu_mul.v) | [上游原文](https://raw.githubusercontent.com/freecores/double_fpu/cf173d0b7cc13f0ec367c07f8b322850a1428c74/pipeline/fpu_mul.v) |
| [double_fpu_pipeline/Readme_pipeline.txt](double_fpu_pipeline/Readme_pipeline.txt) | [上游原文](https://raw.githubusercontent.com/freecores/double_fpu/cf173d0b7cc13f0ec367c07f8b322850a1428c74/pipeline/Readme_pipeline.txt) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
