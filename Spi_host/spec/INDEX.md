# Spi_host / spec

已有原项目设计Spec、寄存器定义和验证计划；commit可能晚于论文

本目录收集到的公开资料未确认与 ChatTest 实验版本完全一致。

| 文件 | 来源 | 类别 |
|---|---|---|
| [data/spi_host.hjson](data/spi_host.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/data/spi_host.hjson) | original_design_specification |
| [doc/interfaces.md](doc/interfaces.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/interfaces.md) | original_design_specification |
| [doc/programmers_guide.md](doc/programmers_guide.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/programmers_guide.md) | original_design_specification |
| [doc/registers.md](doc/registers.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/registers.md) | original_design_specification |
| [doc/spi_host_block_diagram.svg](doc/spi_host_block_diagram.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/spi_host_block_diagram.svg) | original_design_specification |
| [doc/spi_host_bypassable_state.svg](doc/spi_host_bypassable_state.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/spi_host_bypassable_state.svg) | original_design_specification |
| [doc/spi_host_fsm_complete.svg](doc/spi_host_fsm_complete.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/spi_host_fsm_complete.svg) | original_design_specification |
| [doc/spi_host_fsm_simplified.svg](doc/spi_host_fsm_simplified.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/spi_host_fsm_simplified.svg) | original_design_specification |
| [doc/spi_host_passthrough.svg](doc/spi_host_passthrough.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/spi_host_passthrough.svg) | original_design_specification |
| [doc/theory_of_operation.md](doc/theory_of_operation.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/doc/theory_of_operation.md) | original_design_specification |
| [README.md](README.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/README.md) | original_design_specification |
| [verification/data/spi_host_sec_cm_testplan.hjson](verification/data/spi_host_sec_cm_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/data/spi_host_sec_cm_testplan.hjson) | verification_plan |
| [verification/data/spi_host_testplan.hjson](verification/data/spi_host_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/data/spi_host_testplan.hjson) | verification_plan |
| [verification/dv/doc/tb.svg](verification/dv/doc/tb.svg) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/dv/doc/tb.svg) | verification_plan |
| [verification/dv/README.md](verification/dv/README.md) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/ip/spi_host/dv/README.md) | verification_plan |
| [verification/imports/hw/dv/tools/dvsim/testplans/alert_test_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/alert_test_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/alert_test_testplan.hjson) | verification_plan_dependency |
| [verification/imports/hw/dv/tools/dvsim/testplans/csr_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/csr_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/csr_testplan.hjson) | verification_plan_dependency |
| [verification/imports/hw/dv/tools/dvsim/testplans/intr_test_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/intr_test_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/intr_test_testplan.hjson) | verification_plan_dependency |
| [verification/imports/hw/dv/tools/dvsim/testplans/mem_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/mem_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/mem_testplan.hjson) | verification_plan_dependency |
| [verification/imports/hw/dv/tools/dvsim/testplans/stress_all_with_reset_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/stress_all_with_reset_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/stress_all_with_reset_testplan.hjson) | verification_plan_dependency |
| [verification/imports/hw/dv/tools/dvsim/testplans/tl_device_access_types_testplan.hjson](verification/imports/hw/dv/tools/dvsim/testplans/tl_device_access_types_testplan.hjson) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/hw/dv/tools/dvsim/testplans/tl_device_access_types_testplan.hjson) | verification_plan_dependency |
| [licenses/opentitan/LICENSE](licenses/opentitan/LICENSE) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/LICENSE) | upstream_license_or_notice |
| [licenses/opentitan/NOTICE](licenses/opentitan/NOTICE) | [原始来源](https://raw.githubusercontent.com/lowRISC/opentitan/e404f576d4e48cdbd2e56e4b34f686107bf38850/NOTICE) | upstream_license_or_notice |

verification/ 是验证计划与环境说明；imports/ 保存其共享计划附件。
