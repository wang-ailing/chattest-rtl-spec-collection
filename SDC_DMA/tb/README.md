# SDC_DMA Testbench

原项目 DMA 版顶层 TB＋局部 FIFO TB

对应 sdc_dma 版本；sdModel 与 Wishbone memory model 读取相对路径下的初始化文件，需按原项目目录运行。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [upstream/bench/sdc_dma/verilog/sdModel.v](upstream/bench/sdc_dma/verilog/sdModel.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/sdModel.v) |
| [upstream/bench/sdc_dma/verilog/sd_controller_top_tb.v](upstream/bench/sdc_dma/verilog/sd_controller_top_tb.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/sd_controller_top_tb.v) |
| [upstream/bench/sdc_dma/verilog/timescale.v](upstream/bench/sdc_dma/verilog/timescale.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/timescale.v) |
| [upstream/bench/sdc_dma/verilog/wb_bus_mon.v](upstream/bench/sdc_dma/verilog/wb_bus_mon.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/wb_bus_mon.v) |
| [upstream/bench/sdc_dma/verilog/wb_master32.v](upstream/bench/sdc_dma/verilog/wb_master32.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/wb_master32.v) |
| [upstream/bench/sdc_dma/verilog/wb_master_behavioral.v](upstream/bench/sdc_dma/verilog/wb_master_behavioral.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/wb_master_behavioral.v) |
| [upstream/bench/sdc_dma/verilog/wb_model_defines.v](upstream/bench/sdc_dma/verilog/wb_model_defines.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/wb_model_defines.v) |
| [upstream/bench/sdc_dma/verilog/wb_slave_behavioral.v](upstream/bench/sdc_dma/verilog/wb_slave_behavioral.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/bench/sdc_dma/verilog/wb_slave_behavioral.v) |
| [upstream/rtl/sdc_dma/verilog/sd_rx_fifo_tb.v](upstream/rtl/sdc_dma/verilog/sd_rx_fifo_tb.v) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/rtl/sdc_dma/verilog/sd_rx_fifo_tb.v) |
| [upstream/sim/rtl_sim/bin/FLASH.txt](upstream/sim/rtl_sim/bin/FLASH.txt) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/sim/rtl_sim/bin/FLASH.txt) |
| [upstream/sim/rtl_sim/bin/ramdisk2.hex](upstream/sim/rtl_sim/bin/ramdisk2.hex) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/sim/rtl_sim/bin/ramdisk2.hex) |
| [upstream/sim/rtl_sim/bin/wb_memory.txt](upstream/sim/rtl_sim/bin/wb_memory.txt) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/sim/rtl_sim/bin/wb_memory.txt) |
| [upstream/sim/rtl_sim/run/comp.do](upstream/sim/rtl_sim/run/comp.do) | [上游原文](https://raw.githubusercontent.com/freecores/sdcard_mass_storage_controller/e09d1db9da0aa2db58cabf521433c8257f10a451/sim/rtl_sim/run/comp.do) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
