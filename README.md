# ChatTest RTL and Spec Collection

> **非官方仓库 / Unofficial repository**
>
> 本仓库是个人整理的非官方资料集合，不是 ChatTest 论文作者发布的官方代码、数据集或复现仓库，也不代表任何上游项目。
> 收集的 RTL、Spec、TB 尚未确认与论文实验使用的文本及版本完全一致。

按 ChatTest 论文 Table II 的 20 项设计整理上游公开资料。

## 目录约定

- 各设计的 `rtl/`、`spec/`、`tb/` 仅保存上游原版文件；上游自带 README、说明文本和许可文件保留。
- 所有整理说明、匹配判断、版本差异和缺项记录放在本页及根目录 [`sources.json`](sources.json)。
- 集中附加的重复许可证副本合并到根目录 [`licenses/`](licenses/)，适用项目记录在 sources.json；上游原目录本来就有的许可文件保持原位。
- 没有原始文件的目录不放占位文件，因此 GitHub 不显示这些空目录；缺项仍在下表记录。
- 原文件内容不作修改。分类后的目录不是完整上游工程，原文内部链接和构建路径保持原样。

## 设计与资料状态

| ID | Design | RTL | Spec | TB |
|---|---|---|---|---|
| 01 | [Adapter](Adapter/) | [同名RTL，行数接近](Adapter/rtl/) | [已有benchmark整理Spec；尚无独立原项目规格](Adapter/spec/) | [同源 GenBen benchmark 比较 TB](Adapter/tb/) |
| 02 | [TBU](TBU/) | [同名RTL，行数接近](TBU/rtl/) | [已有benchmark整理Spec，包含推测性措辞；尚无独立原项目规格](TBU/spec/) | [同源 GenBen benchmark 比较 TB](TBU/tb/) |
| 03 | [FPU_mul](FPU_mul/) | [同名RTL](FPU_mul/rtl/) | [已有benchmark整理Spec及同源流水版本原项目说明](FPU_mul/spec/) | [原项目流水乘法器单元 TB](FPU_mul/tb/) |
| 04 | [FPU_div](FPU_div/) | [同名RTL](FPU_div/rtl/) | [已有benchmark整理Spec及同源完整FPU项目文档；子模块范围需区分](FPU_div/spec/) | [同源 GenBen benchmark 比较 TB；上游模型调用需检查](FPU_div/tb/) |
| 05 | Cam_slave | 尚未定位准确源码（目录无原始文件） | 未找到可靠的模块源码及Spec（目录无原始文件） | 未找到可确认对应的公开 TB（目录无原始文件） |
| 06 | Streamdh264ct8 | 尚未定位准确源码（目录无原始文件） | 未找到可靠的模块源码及Spec（目录无原始文件） | 未找到可确认对应的公开 TB（目录无原始文件） |
| 07 | Streamdmpeg2cbp | 尚未定位准确源码（目录无原始文件） | 未找到可靠的模块源码及Spec（目录无原始文件） | 未找到可确认对应的公开 TB（目录无原始文件） |
| 08 | [A7WrapSM](A7WrapSM/) | [找到原厂包及文件清单，未取得明文RTL](A7WrapSM/rtl/) | [已有原厂A7WrapSM模块手册；现有源码包未提供可读明文RTL](A7WrapSM/spec/) | 未找到公开可读 TB；厂商 CPZ 不算 TB（目录无原始文件） |
| 09 | Streamdh264ct4 | 尚未定位准确源码（目录无原始文件） | 未找到可靠的模块源码及Spec（目录无原始文件） | 未找到可确认对应的公开 TB（目录无原始文件） |
| 10 | [Timer](Timer/) | [候选实现](Timer/rtl/) | 已有候选RTL；未找到该模块独立Spec（目录无原始文件） | [仅 C910 系统集成 TB；未找到独立模块 TB](Timer/tb/) |
| 11 | [Uart_apb_reg](Uart_apb_reg/) | [同名RTL](Uart_apb_reg/rtl/) | 已有同名RTL；未找到该模块独立Spec（目录无原始文件） | [仅 C910 系统集成 TB；未找到独立模块 TB](Uart_apb_reg/tb/) |
| 12 | [SHA3](SHA3/) | [候选实现](SHA3/rtl/) | [已有原项目正式Spec；RTL与论文具体版本未证实](SHA3/spec/) | [原项目高吞吐版本自检 TB](SHA3/tb/) |
| 13 | [Ct_had_ctrl](Ct_had_ctrl/) | [同名RTL](Ct_had_ctrl/rtl/) | [仅补充CPU和调试子系统背景手册；未找到ct_had_ctrl独立Spec](Ct_had_ctrl/spec/) | [仅 C910 系统集成 TB；未找到 HAD 控制器独立 TB](Ct_had_ctrl/tb/) |
| 14 | [AXI_interconnect](AXI_interconnect/) | [两个候选实现](AXI_interconnect/rtl/) | [已有alexforencich候选的部分接口说明；C910候选缺独立Spec](AXI_interconnect/spec/) | [verilog-axi 单元 TB＋C910 系统集成 TB](AXI_interconnect/tb/) |
| 15 | [AXI2ahb](AXI2ahb/) | [同名功能匹配的候选实现](AXI2ahb/rtl/) | 已有候选RTL；未找到该模块独立Spec（目录无原始文件） | [仅 C910 系统集成 TB；未找到独立模块 TB](AXI2ahb/tb/) |
| 16 | [Elliptic_Curve](Elliptic_Curve/) | [项目功能描述匹配](Elliptic_Curve/rtl/) | [已有原项目正式Spec](Elliptic_Curve/spec/) | [原项目点加和标量乘自检 TB](Elliptic_Curve/tb/) |
| 17 | [I2C](I2C/) | [候选实现](I2C/rtl/) | [已有候选原项目正式Spec；I2C名称不能唯一确认论文版本](I2C/spec/) | [原项目 I2C 主机 TB 及总线、从机模型](I2C/tb/) |
| 18 | [Aon_timer](Aon_timer/) | [同名同功能项目](Aon_timer/rtl/) | [已有原项目设计Spec、寄存器定义和验证计划；commit可能晚于论文](Aon_timer/spec/) | [原项目 UVM DV 目录快照](Aon_timer/tb/) |
| 19 | [SDC_DMA](SDC_DMA/) | [项目目录与功能匹配](SDC_DMA/rtl/) | [已有原项目功能规格和设计说明](SDC_DMA/spec/) | [原项目 DMA 版顶层 TB＋局部 FIFO TB](SDC_DMA/tb/) |
| 20 | [Spi_host](Spi_host/) | [同名同功能项目](Spi_host/rtl/) | [已有原项目设计Spec、寄存器定义和验证计划；commit可能晚于论文](Spi_host/spec/) | [已收录原项目IP专属DV目录46个上游文件；公共依赖需原工程提供，未运行仿真](Spi_host/tb/) |

## 重要对应关系与使用范围

- 表中的数量与功能特征统计来自论文，未找到对应的 ChatTest 原始功能点清单；原项目资料不等于已确认的论文实验版本。
- benchmark 整理的 Spec 与原项目规格书分开标注；背景手册和接口说明不等同于完整模块 Spec。
- 原始版权声明保留，使用材料需遵守对应上游许可和版权声明。本仓库不对全部材料统一授予开源许可。
- 本次完成资料收集和文件校验，尚未编译或运行仿真。

- **Adapter**：GenBen dut.v 与现有 RTL 在模块名、注释和空白归一化后对应；保留模块名为 top 的原始 benchmark DUT，以供其 ref_tb 使用。 未发现 GenBen 数据集独立许可证；保留原始声明和来源，不新增授权声明。
- **TBU**：GenBen dut.v 与现有 RTL 在模块名、注释和空白归一化后对应。原 TB 使用 force 操作内部 pstate。 未发现 GenBen 数据集独立许可证；保留原始声明和来源，不新增授权声明。
- **FPU_mul**：对应 double_fpu/pipeline/fpu_mul.v；不可与非流水 FPU 顶层 TB 混用。
- **FPU_div**：GenBen dut.v 与现有 fpu_div 逻辑对应；原 TB 的 $system 模型调用被上游注释，仍读取 ref_output.txt。原样收录，未修复或运行。 未发现 GenBen 数据集独立许可证；保留原始声明和来源，不新增授权声明。
- **A7WrapSM**：未找到可公开读取的 A7WrapSM TB 源码。已有 CPZ 包和手册不能证明已获得可读 TB。
- **Timer**： 所收 C910 smart_run TB 需要完整 CPU/SoC RTL、构建环境及 inst.pat/data.pat 软件镜像，不能作为独立模块 TB。
- **Uart_apb_reg**： 所收 C910 smart_run TB 需要完整 CPU/SoC RTL、构建环境及 inst.pat/data.pat 软件镜像，不能作为独立模块 TB。
- **SHA3**：仅收录 high_throughput_core 对应测试；测试向量内嵌在 Verilog 中。
- **Ct_had_ctrl**：ct_had_ctrl 是 CPU 内部控制模块；整机 TB 包含 CPU 不代表专门验证了该模块全部功能。 所收 C910 smart_run TB 需要完整 CPU/SoC RTL、构建环境及 inst.pat/data.pat 软件镜像，不能作为独立模块 TB。
- **AXI_interconnect**：verilog-axi/ 保存 cocotb 单元测试、历史 MyHDL 测试及 wrapper 依赖；openc910/ 为另一个候选的整机验证入口。两者不能合并。
- **AXI2ahb**： 所收 C910 smart_run TB 需要完整 CPU/SoC RTL、构建环境及 inst.pat/data.pat 软件镜像，不能作为独立模块 TB。
- **Elliptic_Curve**：包含 test_point_add.v 和 test_point_scalar_mult.v，自检向量在 TB 中。
- **I2C**：原配置另有 vlog_tb_utils、wiredelay 等依赖，需配套原项目工程。
- **Aon_timer**：包含顶层、scoreboard、功能覆盖率、测试序列、断言和配置；需要 CIP、RAL、usbdev_env 等公共依赖。
- **SDC_DMA**：对应 sdc_dma 版本；sdModel 与 Wishbone memory model 读取相对路径下的初始化文件，需按原项目目录运行。
- **Spi_host**：TB 为 OpenTitan IP 专属 DV 目录快照；需要同版本完整工程中的 CIP、SPI/TileLink agents、RAL 生成工具及其他公共依赖。
- **FPU_mul/FPU_div**：乘法器对应流水版本；完整 FPU 顶层的周期参数不能直接套用于这些子模块。
- **A7WrapSM**：厂商 CPZ 封装包与提取的 XML 元数据不等于公开可读 RTL 或 TB。

## SPI_HOST 原版规格阅读入口

- [总览](Spi_host/spec/README.md)
- [工作原理与时序](Spi_host/spec/doc/theory_of_operation.md)
- [编程指南](Spi_host/spec/doc/programmers_guide.md)
- [硬件接口](Spi_host/spec/doc/interfaces.md)
- [寄存器](Spi_host/spec/doc/registers.md)
- [TB 顶层](Spi_host/tb/tb.sv)
- [上游 TB 说明](Spi_host/tb/README.md)

## 来源与校验

[`sources.json`](sources.json) 记录每个原版文件的相对路径、来源 URL、版本及 SHA-256；共享许可证另列，保留其适用设计。
本页和 sources.json 是整理者生成的根目录说明，不属于原始 IP 资料。
