# SPI_HOST Testbench

本目录收录 OpenTitan SPI_HOST 的公开 SystemVerilog/UVM 验证源码和配置。

- 上游版本：`e404f576d4e48cdbd2e56e4b34f686107bf38850`
- 原始目录：[`hw/ip/spi_host/dv/`](https://github.com/lowRISC/opentitan/tree/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/dv)
- 收录范围：该 IP 专属 DV 目录的全部 46 个文件，其中 36 个 SystemVerilog 文件。
- 原项目说明：[UPSTREAM_README.md](UPSTREAM_README.md)。

| 入口 | 内容 |
|---|---|
| [tb.sv](tb.sv) | testbench 顶层，实例化 DUT 并启动 UVM |
| [env/](env/) | 验证环境、scoreboard、功能覆盖率、事务与 sequencer |
| [env/seq_lib/](env/seq_lib/) | smoke、复位、溢出、错误命令等测试序列 |
| [tests/](tests/) | UVM test 与 test package |
| [sva/](sva/) | 断言和 bind |
| [cov/](cov/) | 覆盖率辅助文件 |
| [spi_host_sim_cfg.hjson](spi_host_sim_cfg.hjson) | 仿真与回归配置 |
| [spi_host_sim.core](spi_host_sim.core) | FuseSoC 配置 |

## 构建范围

上游文件保持原样，未改写配置中的原项目路径。
构建和仿真需要同一版本的完整 OpenTitan 工程及公共依赖，包括 CIP、SPI/TileLink agents、RAL 生成工具等。
本目录是 IP 专属 DV 源码快照；本次完成了下载与文件校验，尚未运行仿真。

本仓库是非官方资料整理仓库。原始版权声明保留，许可文件见 [licenses/opentitan/](licenses/opentitan/)。
