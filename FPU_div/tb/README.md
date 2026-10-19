# FPU_div Testbench

同源 GenBen benchmark 比较 TB；上游模型调用需检查

GenBen dut.v 与现有 fpu_div 逻辑对应；原 TB 的 $system 模型调用被上游注释，仍读取 ref_output.txt。原样收录，未修复或运行。 未发现 GenBen 数据集独立许可证；保留原始声明和来源，不新增授权声明。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [genben/ref_tb.v](genben/ref_tb.v) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/ref_tb.v) |
| [genben/ref.v](genben/ref.v) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/ref.v) |
| [genben/dut.v](genben/dut.v) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/dut.v) |
| [genben/dut.f](genben/dut.f) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/dut.f) |
| [genben/makefile](genben/makefile) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/makefile) |
| [genben/fpu_div_ref.cpp](genben/fpu_div_ref.cpp) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/fpu_div_ref.cpp) |
| [genben/ref_output.txt](genben/ref_output.txt) | [上游原文](https://raw.githubusercontent.com/ChatDesignVerification/GenBen/a103f9a892e31bd1c410fe23663bc89f029c6fe9/data/Text/GA_70/ref_output.txt) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
