# Uart_apb_reg Testbench

仅 C910 系统集成 TB；未找到独立模块 TB

 所收 C910 smart_run TB 需要完整 CPU/SoC RTL、构建环境及 inst.pat/data.pat 软件镜像，不能作为独立模块 TB。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [openc910/smart_run/logical/tb/Makefile_obj](openc910/smart_run/logical/tb/Makefile_obj) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/tb/Makefile_obj) |
| [openc910/smart_run/logical/tb/int_mnt.v](openc910/smart_run/logical/tb/int_mnt.v) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/tb/int_mnt.v) |
| [openc910/smart_run/logical/tb/sim_main1.cpp](openc910/smart_run/logical/tb/sim_main1.cpp) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/tb/sim_main1.cpp) |
| [openc910/smart_run/logical/tb/tb.v](openc910/smart_run/logical/tb/tb.v) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/tb/tb.v) |
| [openc910/smart_run/logical/tb/tb_verilator.v](openc910/smart_run/logical/tb/tb_verilator.v) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/tb/tb_verilator.v) |
| [openc910/smart_run/logical/filelists/ip.fl](openc910/smart_run/logical/filelists/ip.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/ip.fl) |
| [openc910/smart_run/logical/filelists/sim.fl](openc910/smart_run/logical/filelists/sim.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/sim.fl) |
| [openc910/smart_run/logical/filelists/sim_verilator.fl](openc910/smart_run/logical/filelists/sim_verilator.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/sim_verilator.fl) |
| [openc910/smart_run/logical/filelists/smart.fl](openc910/smart_run/logical/filelists/smart.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/smart.fl) |
| [openc910/smart_run/logical/filelists/tb.fl](openc910/smart_run/logical/filelists/tb.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/tb.fl) |
| [openc910/smart_run/logical/filelists/tb_verilator.fl](openc910/smart_run/logical/filelists/tb_verilator.fl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/logical/filelists/tb_verilator.fl) |
| [openc910/smart_run/setup/env_check.mk](openc910/smart_run/setup/env_check.mk) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/setup/env_check.mk) |
| [openc910/smart_run/setup/example_setup.csh](openc910/smart_run/setup/example_setup.csh) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/setup/example_setup.csh) |
| [openc910/smart_run/setup/nc.tcl](openc910/smart_run/setup/nc.tcl) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/setup/nc.tcl) |
| [openc910/smart_run/setup/smart_cfg.mk](openc910/smart_run/setup/smart_cfg.mk) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/setup/smart_cfg.mk) |
| [openc910/smart_run/Makefile](openc910/smart_run/Makefile) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/smart_run/Makefile) |
| [openc910/LICENSE](openc910/LICENSE) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/LICENSE) |
| [openc910/README.md](openc910/README.md) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/README.md) |
| [licenses/openc910/LICENSE](licenses/openc910/LICENSE) | [上游原文](https://raw.githubusercontent.com/XUANTIE-RV/openc910/b91c90914c19f114d35c8f6b73408eb241ed847c/LICENSE) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
