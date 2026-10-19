# Aon_timer Testbench

原项目 UVM DV 目录快照

包含顶层、scoreboard、功能覆盖率、测试序列、断言和配置；需要 CIP、RAL、usbdev_env 等公共依赖。

本仓库为非官方资料整理。上游文件原样保存，来源和 SHA-256 见顶层 sources.json；
所收版本未确认与 ChatTest 实验版本完全一致，本次未编译或运行仿真。

## 文件入口与来源

| 文件 | 来源 |
|---|---|
| [UPSTREAM_README.md](UPSTREAM_README.md) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/README.md) |
| [aon_timer_sim.core](aon_timer_sim.core) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/aon_timer_sim.core) |
| [aon_timer_sim_cfg.hjson](aon_timer_sim_cfg.hjson) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/aon_timer_sim_cfg.hjson) |
| [cov/aon_timer_unr_excl.el](cov/aon_timer_unr_excl.el) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/cov/aon_timer_unr_excl.el) |
| [cov/aon_timer_unr_manually_excluded_excl.el](cov/aon_timer_unr_manually_excluded_excl.el) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/cov/aon_timer_unr_manually_excluded_excl.el) |
| [cov/aon_timer_unr_non_racl_manually_excluded_excl.el](cov/aon_timer_unr_non_racl_manually_excluded_excl.el) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/cov/aon_timer_unr_non_racl_manually_excluded_excl.el) |
| [cov/rtl_exclusions_pending_rtl_changes.el](cov/rtl_exclusions_pending_rtl_changes.el) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/cov/rtl_exclusions_pending_rtl_changes.el) |
| [doc/domains.svg](doc/domains.svg) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/doc/domains.svg) |
| [doc/tb.svg](doc/tb.svg) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/doc/tb.svg) |
| [env/aon_timer_core_if.sv](env/aon_timer_core_if.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_core_if.sv) |
| [env/aon_timer_env.core](env/aon_timer_env.core) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_env.core) |
| [env/aon_timer_env.sv](env/aon_timer_env.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_env.sv) |
| [env/aon_timer_env_cfg.sv](env/aon_timer_env_cfg.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_env_cfg.sv) |
| [env/aon_timer_env_cov.sv](env/aon_timer_env_cov.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_env_cov.sv) |
| [env/aon_timer_env_pkg.sv](env/aon_timer_env_pkg.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_env_pkg.sv) |
| [env/aon_timer_intr_timed_regs.sv](env/aon_timer_intr_timed_regs.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_intr_timed_regs.sv) |
| [env/aon_timer_scoreboard.sv](env/aon_timer_scoreboard.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_scoreboard.sv) |
| [env/aon_timer_virtual_sequencer.sv](env/aon_timer_virtual_sequencer.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/aon_timer_virtual_sequencer.sv) |
| [env/seq_lib/aon_timer_alternating_enable_on_off_vseq.sv](env/seq_lib/aon_timer_alternating_enable_on_off_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_alternating_enable_on_off_vseq.sv) |
| [env/seq_lib/aon_timer_base_vseq.sv](env/seq_lib/aon_timer_base_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_base_vseq.sv) |
| [env/seq_lib/aon_timer_common_vseq.sv](env/seq_lib/aon_timer_common_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_common_vseq.sv) |
| [env/seq_lib/aon_timer_custom_intr_vseq.sv](env/seq_lib/aon_timer_custom_intr_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_custom_intr_vseq.sv) |
| [env/seq_lib/aon_timer_jump_vseq.sv](env/seq_lib/aon_timer_jump_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_jump_vseq.sv) |
| [env/seq_lib/aon_timer_prescaler_vseq.sv](env/seq_lib/aon_timer_prescaler_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_prescaler_vseq.sv) |
| [env/seq_lib/aon_timer_smoke_max_thold_vseq.sv](env/seq_lib/aon_timer_smoke_max_thold_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_smoke_max_thold_vseq.sv) |
| [env/seq_lib/aon_timer_smoke_min_thold_vseq.sv](env/seq_lib/aon_timer_smoke_min_thold_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_smoke_min_thold_vseq.sv) |
| [env/seq_lib/aon_timer_smoke_vseq.sv](env/seq_lib/aon_timer_smoke_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_smoke_vseq.sv) |
| [env/seq_lib/aon_timer_stress_all_vseq.sv](env/seq_lib/aon_timer_stress_all_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_stress_all_vseq.sv) |
| [env/seq_lib/aon_timer_vseq_list.sv](env/seq_lib/aon_timer_vseq_list.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_vseq_list.sv) |
| [env/seq_lib/aon_timer_wkup_count_cdc_hi_vseq.sv](env/seq_lib/aon_timer_wkup_count_cdc_hi_vseq.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/env/seq_lib/aon_timer_wkup_count_cdc_hi_vseq.sv) |
| [sva/aon_timer_bind.sv](sva/aon_timer_bind.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/sva/aon_timer_bind.sv) |
| [sva/aon_timer_sva.core](sva/aon_timer_sva.core) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/sva/aon_timer_sva.core) |
| [tb.sv](tb.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/tb.sv) |
| [tests/aon_timer_base_test.sv](tests/aon_timer_base_test.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/tests/aon_timer_base_test.sv) |
| [tests/aon_timer_test.core](tests/aon_timer_test.core) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/tests/aon_timer_test.core) |
| [tests/aon_timer_test_pkg.sv](tests/aon_timer_test_pkg.sv) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/aon_timer/dv/tests/aon_timer_test_pkg.sv) |
| [licenses/opentitan/LICENSE](licenses/opentitan/LICENSE) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/LICENSE) |
| [licenses/opentitan/NOTICE](licenses/opentitan/NOTICE) | [上游原文](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/NOTICE) |

## 构建范围

需要的公共库、仿真工具、软件镜像及模型依赖以对应上游工程为准。
配置中的上游路径保持原样；资料收录不表示已形成独立可运行工程。
