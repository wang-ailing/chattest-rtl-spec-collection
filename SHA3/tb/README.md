# SHA3 Testbench

原项目高吞吐版本自检 TB

仅收录 high_throughput_core 对应测试；测试向量内嵌在 Verilog 中。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [Read_Me.txt](Read_Me.txt) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/Read_Me.txt) |
| [simulation.do](simulation.do) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/simulation.do) |
| [test_f_permutation.v](test_f_permutation.v) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/test_f_permutation.v) |
| [test_keccak.v](test_keccak.v) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/test_keccak.v) |
| [test_padder.v](test_padder.v) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/test_padder.v) |
| [test_padder1.v](test_padder1.v) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/test_padder1.v) |
| [test_rconst2in1.v](test_rconst2in1.v) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/high_throughput_core/testbench/test_rconst2in1.v) |
| [licenses/sha3/LICENSE](licenses/sha3/LICENSE) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/LICENSE) |
| [licenses/sha3/NOTICE](licenses/sha3/NOTICE) | [上游原文](https://raw.githubusercontent.com/freecores/sha3/c25a5befc75e8f8392fdbff040165428b2f54bfd/NOTICE) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
