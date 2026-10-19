# ChatTest RTL and Spec Collection

> **非官方仓库 / Unofficial repository**
>
> 本仓库是个人整理的非官方资料集合，不是 ChatTest 论文作者发布的官方代码、数据集或复现仓库，也不代表任何上游项目。
> 收集的 RTL 和 Spec 尚未确认与论文实验使用的文本及版本完全一致。
> 原始材料的版权和许可归各自上游作者或权利人所有。

按 ChatTest 论文 Table II 的 20 项设计整理的源码与规格资料。

每个设计目录包含 `spec/`、`rtl/` 和 `tb/`。资料来自原项目或公开 benchmark；
尚未证明这些文件就是 ChatTest 实验使用的文本和版本，也未完成整体构建或论文复现。

原文件内容及版权声明保留。上游许可文件放在相应 `spec/licenses/` 与 `rtl/licenses/`；
本仓库不为所有材料统一授予开源许可。A7WrapSM 的厂商包不是公开可读的明文 RTL。

## 目录状态

| ID | Design | Spec 情况 | TB 情况 |
|---|---|---|---|
| 01 | [Adapter](Adapter/) | 已有benchmark整理Spec；尚无独立原项目规格 | [同源 GenBen benchmark 比较 TB](Adapter/tb/) |
| 02 | [TBU](TBU/) | 已有benchmark整理Spec，包含推测性措辞；尚无独立原项目规格 | [同源 GenBen benchmark 比较 TB](TBU/tb/) |
| 03 | [FPU_mul](FPU_mul/) | 已有benchmark整理Spec及同源流水版本原项目说明 | [原项目流水乘法器单元 TB](FPU_mul/tb/) |
| 04 | [FPU_div](FPU_div/) | 已有benchmark整理Spec及同源完整FPU项目文档；子模块范围需区分 | [同源 GenBen benchmark 比较 TB；上游模型调用需检查](FPU_div/tb/) |
| 05 | [Cam_slave](Cam_slave/) | 未找到可靠的模块源码及Spec | [未找到可确认对应的公开 TB](Cam_slave/tb/) |
| 06 | [Streamdh264ct8](Streamdh264ct8/) | 未找到可靠的模块源码及Spec | [未找到可确认对应的公开 TB](Streamdh264ct8/tb/) |
| 07 | [Streamdmpeg2cbp](Streamdmpeg2cbp/) | 未找到可靠的模块源码及Spec | [未找到可确认对应的公开 TB](Streamdmpeg2cbp/tb/) |
| 08 | [A7WrapSM](A7WrapSM/) | 已有原厂A7WrapSM模块手册；现有源码包未提供可读明文RTL | [未找到公开可读 TB；厂商 CPZ 不算 TB](A7WrapSM/tb/) |
| 09 | [Streamdh264ct4](Streamdh264ct4/) | 未找到可靠的模块源码及Spec | [未找到可确认对应的公开 TB](Streamdh264ct4/tb/) |
| 10 | [Timer](Timer/) | 已有候选RTL；未找到该模块独立Spec | [仅 C910 系统集成 TB；未找到独立模块 TB](Timer/tb/) |
| 11 | [Uart_apb_reg](Uart_apb_reg/) | 已有同名RTL；未找到该模块独立Spec | [仅 C910 系统集成 TB；未找到独立模块 TB](Uart_apb_reg/tb/) |
| 12 | [SHA3](SHA3/) | 已有原项目正式Spec；RTL与论文具体版本未证实 | [原项目高吞吐版本自检 TB](SHA3/tb/) |
| 13 | [Ct_had_ctrl](Ct_had_ctrl/) | 仅补充CPU和调试子系统背景手册；未找到ct_had_ctrl独立Spec | [仅 C910 系统集成 TB；未找到 HAD 控制器独立 TB](Ct_had_ctrl/tb/) |
| 14 | [AXI_interconnect](AXI_interconnect/) | 已有alexforencich候选的部分接口说明；C910候选缺独立Spec | [verilog-axi 单元 TB＋C910 系统集成 TB](AXI_interconnect/tb/) |
| 15 | [AXI2ahb](AXI2ahb/) | 已有候选RTL；未找到该模块独立Spec | [仅 C910 系统集成 TB；未找到独立模块 TB](AXI2ahb/tb/) |
| 16 | [Elliptic_Curve](Elliptic_Curve/) | 已有原项目正式Spec | [原项目点加和标量乘自检 TB](Elliptic_Curve/tb/) |
| 17 | [I2C](I2C/) | 已有候选原项目正式Spec；I2C名称不能唯一确认论文版本 | [原项目 I2C 主机 TB 及总线、从机模型](I2C/tb/) |
| 18 | [Aon_timer](Aon_timer/) | 已有原项目设计Spec、寄存器定义和验证计划；commit可能晚于论文 | [原项目 UVM DV 目录快照](Aon_timer/tb/) |
| 19 | [SDC_DMA](SDC_DMA/) | 已有原项目功能规格和设计说明 | [原项目 DMA 版顶层 TB＋局部 FIFO TB](SDC_DMA/tb/) |
| 20 | [Spi_host](Spi_host/) | 已有原项目设计Spec、寄存器定义和验证计划；commit可能晚于论文 | [原项目 UVM DV 目录快照](Spi_host/tb/) |

各设计的 `tb/` 记录公开 TB 来源和查找状态；独立模块 TB、benchmark 比较 TB、系统集成 TB 和未找到的项目分别标注。

## 文件来源与校验

`sources.json` 记录每个原始文件的相对路径、下载来源及 SHA-256。
对文件未做功能修改；目录调整不代表补齐了依赖或缺失规格。
