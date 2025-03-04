#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(config_public_header 
	include/alibabacloud/config/ConfigClient.h
	include/alibabacloud/config/ConfigExport.h )

set(config_public_header_model 
	include/alibabacloud/config/model/ActiveAggregateConfigRulesRequest.h
	include/alibabacloud/config/model/ActiveAggregateConfigRulesResult.h
	include/alibabacloud/config/model/AttachAggregateConfigRuleToCompliancePackRequest.h
	include/alibabacloud/config/model/AttachAggregateConfigRuleToCompliancePackResult.h
	include/alibabacloud/config/model/AttachConfigRuleToCompliancePackRequest.h
	include/alibabacloud/config/model/AttachConfigRuleToCompliancePackResult.h
	include/alibabacloud/config/model/CreateAggregateCompliancePackRequest.h
	include/alibabacloud/config/model/CreateAggregateCompliancePackResult.h
	include/alibabacloud/config/model/CreateAggregateConfigRuleRequest.h
	include/alibabacloud/config/model/CreateAggregateConfigRuleResult.h
	include/alibabacloud/config/model/CreateAggregateRemediationRequest.h
	include/alibabacloud/config/model/CreateAggregateRemediationResult.h
	include/alibabacloud/config/model/CreateAggregatorRequest.h
	include/alibabacloud/config/model/CreateAggregatorResult.h
	include/alibabacloud/config/model/CreateCompliancePackRequest.h
	include/alibabacloud/config/model/CreateCompliancePackResult.h
	include/alibabacloud/config/model/CreateConfigRuleRequest.h
	include/alibabacloud/config/model/CreateConfigRuleResult.h
	include/alibabacloud/config/model/CreateRemediationRequest.h
	include/alibabacloud/config/model/CreateRemediationResult.h
	include/alibabacloud/config/model/DeactiveAggregateConfigRulesRequest.h
	include/alibabacloud/config/model/DeactiveAggregateConfigRulesResult.h
	include/alibabacloud/config/model/DeactiveConfigRulesRequest.h
	include/alibabacloud/config/model/DeactiveConfigRulesResult.h
	include/alibabacloud/config/model/DeleteAggregateCompliancePacksRequest.h
	include/alibabacloud/config/model/DeleteAggregateCompliancePacksResult.h
	include/alibabacloud/config/model/DeleteAggregateConfigRulesRequest.h
	include/alibabacloud/config/model/DeleteAggregateConfigRulesResult.h
	include/alibabacloud/config/model/DeleteAggregateRemediationsRequest.h
	include/alibabacloud/config/model/DeleteAggregateRemediationsResult.h
	include/alibabacloud/config/model/DeleteAggregatorsRequest.h
	include/alibabacloud/config/model/DeleteAggregatorsResult.h
	include/alibabacloud/config/model/DeleteCompliancePacksRequest.h
	include/alibabacloud/config/model/DeleteCompliancePacksResult.h
	include/alibabacloud/config/model/DeleteRemediationsRequest.h
	include/alibabacloud/config/model/DeleteRemediationsResult.h
	include/alibabacloud/config/model/DetachAggregateConfigRuleToCompliancePackRequest.h
	include/alibabacloud/config/model/DetachAggregateConfigRuleToCompliancePackResult.h
	include/alibabacloud/config/model/DetachConfigRuleToCompliancePackRequest.h
	include/alibabacloud/config/model/DetachConfigRuleToCompliancePackResult.h
	include/alibabacloud/config/model/GenerateAggregateCompliancePackReportRequest.h
	include/alibabacloud/config/model/GenerateAggregateCompliancePackReportResult.h
	include/alibabacloud/config/model/GenerateAggregateConfigRulesReportRequest.h
	include/alibabacloud/config/model/GenerateAggregateConfigRulesReportResult.h
	include/alibabacloud/config/model/GenerateCompliancePackReportRequest.h
	include/alibabacloud/config/model/GenerateCompliancePackReportResult.h
	include/alibabacloud/config/model/GenerateConfigRulesReportRequest.h
	include/alibabacloud/config/model/GenerateConfigRulesReportResult.h
	include/alibabacloud/config/model/GetAggregateAccountComplianceByPackRequest.h
	include/alibabacloud/config/model/GetAggregateAccountComplianceByPackResult.h
	include/alibabacloud/config/model/GetAggregateCompliancePackRequest.h
	include/alibabacloud/config/model/GetAggregateCompliancePackResult.h
	include/alibabacloud/config/model/GetAggregateCompliancePackReportRequest.h
	include/alibabacloud/config/model/GetAggregateCompliancePackReportResult.h
	include/alibabacloud/config/model/GetAggregateConfigRuleRequest.h
	include/alibabacloud/config/model/GetAggregateConfigRuleResult.h
	include/alibabacloud/config/model/GetAggregateConfigRuleComplianceByPackRequest.h
	include/alibabacloud/config/model/GetAggregateConfigRuleComplianceByPackResult.h
	include/alibabacloud/config/model/GetAggregateConfigRuleSummaryByRiskLevelRequest.h
	include/alibabacloud/config/model/GetAggregateConfigRuleSummaryByRiskLevelResult.h
	include/alibabacloud/config/model/GetAggregateConfigRulesReportRequest.h
	include/alibabacloud/config/model/GetAggregateConfigRulesReportResult.h
	include/alibabacloud/config/model/GetAggregateDiscoveredResourceRequest.h
	include/alibabacloud/config/model/GetAggregateDiscoveredResourceResult.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceByConfigRuleRequest.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceByConfigRuleResult.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceByPackRequest.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceByPackResult.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceGroupByRegionRequest.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceGroupByRegionResult.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceGroupByResourceTypeRequest.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceGroupByResourceTypeResult.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceTimelineRequest.h
	include/alibabacloud/config/model/GetAggregateResourceComplianceTimelineResult.h
	include/alibabacloud/config/model/GetAggregateResourceConfigurationTimelineRequest.h
	include/alibabacloud/config/model/GetAggregateResourceConfigurationTimelineResult.h
	include/alibabacloud/config/model/GetAggregateResourceCountsGroupByRegionRequest.h
	include/alibabacloud/config/model/GetAggregateResourceCountsGroupByRegionResult.h
	include/alibabacloud/config/model/GetAggregateResourceCountsGroupByResourceTypeRequest.h
	include/alibabacloud/config/model/GetAggregateResourceCountsGroupByResourceTypeResult.h
	include/alibabacloud/config/model/GetAggregatorRequest.h
	include/alibabacloud/config/model/GetAggregatorResult.h
	include/alibabacloud/config/model/GetCompliancePackRequest.h
	include/alibabacloud/config/model/GetCompliancePackResult.h
	include/alibabacloud/config/model/GetCompliancePackReportRequest.h
	include/alibabacloud/config/model/GetCompliancePackReportResult.h
	include/alibabacloud/config/model/GetConfigRuleRequest.h
	include/alibabacloud/config/model/GetConfigRuleResult.h
	include/alibabacloud/config/model/GetConfigRuleComplianceByPackRequest.h
	include/alibabacloud/config/model/GetConfigRuleComplianceByPackResult.h
	include/alibabacloud/config/model/GetConfigRuleSummaryByRiskLevelRequest.h
	include/alibabacloud/config/model/GetConfigRuleSummaryByRiskLevelResult.h
	include/alibabacloud/config/model/GetConfigRulesReportRequest.h
	include/alibabacloud/config/model/GetConfigRulesReportResult.h
	include/alibabacloud/config/model/GetDiscoveredResourceRequest.h
	include/alibabacloud/config/model/GetDiscoveredResourceResult.h
	include/alibabacloud/config/model/GetDiscoveredResourceCountsGroupByRegionRequest.h
	include/alibabacloud/config/model/GetDiscoveredResourceCountsGroupByRegionResult.h
	include/alibabacloud/config/model/GetDiscoveredResourceCountsGroupByResourceTypeRequest.h
	include/alibabacloud/config/model/GetDiscoveredResourceCountsGroupByResourceTypeResult.h
	include/alibabacloud/config/model/GetManagedRuleRequest.h
	include/alibabacloud/config/model/GetManagedRuleResult.h
	include/alibabacloud/config/model/GetResourceComplianceByConfigRuleRequest.h
	include/alibabacloud/config/model/GetResourceComplianceByConfigRuleResult.h
	include/alibabacloud/config/model/GetResourceComplianceByPackRequest.h
	include/alibabacloud/config/model/GetResourceComplianceByPackResult.h
	include/alibabacloud/config/model/GetResourceComplianceGroupByRegionRequest.h
	include/alibabacloud/config/model/GetResourceComplianceGroupByRegionResult.h
	include/alibabacloud/config/model/GetResourceComplianceGroupByResourceTypeRequest.h
	include/alibabacloud/config/model/GetResourceComplianceGroupByResourceTypeResult.h
	include/alibabacloud/config/model/GetResourceComplianceTimelineRequest.h
	include/alibabacloud/config/model/GetResourceComplianceTimelineResult.h
	include/alibabacloud/config/model/GetResourceConfigurationTimelineRequest.h
	include/alibabacloud/config/model/GetResourceConfigurationTimelineResult.h
	include/alibabacloud/config/model/IgnoreAggregateEvaluationResultsRequest.h
	include/alibabacloud/config/model/IgnoreAggregateEvaluationResultsResult.h
	include/alibabacloud/config/model/IgnoreEvaluationResultsRequest.h
	include/alibabacloud/config/model/IgnoreEvaluationResultsResult.h
	include/alibabacloud/config/model/ListAggregateCompliancePacksRequest.h
	include/alibabacloud/config/model/ListAggregateCompliancePacksResult.h
	include/alibabacloud/config/model/ListAggregateConfigRuleEvaluationResultsRequest.h
	include/alibabacloud/config/model/ListAggregateConfigRuleEvaluationResultsResult.h
	include/alibabacloud/config/model/ListAggregateConfigRulesRequest.h
	include/alibabacloud/config/model/ListAggregateConfigRulesResult.h
	include/alibabacloud/config/model/ListAggregateDiscoveredResourcesRequest.h
	include/alibabacloud/config/model/ListAggregateDiscoveredResourcesResult.h
	include/alibabacloud/config/model/ListAggregateRemediationsRequest.h
	include/alibabacloud/config/model/ListAggregateRemediationsResult.h
	include/alibabacloud/config/model/ListAggregateResourceEvaluationResultsRequest.h
	include/alibabacloud/config/model/ListAggregateResourceEvaluationResultsResult.h
	include/alibabacloud/config/model/ListAggregatorsRequest.h
	include/alibabacloud/config/model/ListAggregatorsResult.h
	include/alibabacloud/config/model/ListCompliancePackTemplatesRequest.h
	include/alibabacloud/config/model/ListCompliancePackTemplatesResult.h
	include/alibabacloud/config/model/ListCompliancePacksRequest.h
	include/alibabacloud/config/model/ListCompliancePacksResult.h
	include/alibabacloud/config/model/ListConfigRuleEvaluationResultsRequest.h
	include/alibabacloud/config/model/ListConfigRuleEvaluationResultsResult.h
	include/alibabacloud/config/model/ListDiscoveredResourcesRequest.h
	include/alibabacloud/config/model/ListDiscoveredResourcesResult.h
	include/alibabacloud/config/model/ListManagedRulesRequest.h
	include/alibabacloud/config/model/ListManagedRulesResult.h
	include/alibabacloud/config/model/ListRemediationTemplatesRequest.h
	include/alibabacloud/config/model/ListRemediationTemplatesResult.h
	include/alibabacloud/config/model/ListRemediationsRequest.h
	include/alibabacloud/config/model/ListRemediationsResult.h
	include/alibabacloud/config/model/ListResourceEvaluationResultsRequest.h
	include/alibabacloud/config/model/ListResourceEvaluationResultsResult.h
	include/alibabacloud/config/model/RevertAggregateEvaluationResultsRequest.h
	include/alibabacloud/config/model/RevertAggregateEvaluationResultsResult.h
	include/alibabacloud/config/model/RevertEvaluationResultsRequest.h
	include/alibabacloud/config/model/RevertEvaluationResultsResult.h
	include/alibabacloud/config/model/StartAggregateConfigRuleEvaluationRequest.h
	include/alibabacloud/config/model/StartAggregateConfigRuleEvaluationResult.h
	include/alibabacloud/config/model/StartAggregateRemediationRequest.h
	include/alibabacloud/config/model/StartAggregateRemediationResult.h
	include/alibabacloud/config/model/StartRemediationRequest.h
	include/alibabacloud/config/model/StartRemediationResult.h
	include/alibabacloud/config/model/UpdateAggregateCompliancePackRequest.h
	include/alibabacloud/config/model/UpdateAggregateCompliancePackResult.h
	include/alibabacloud/config/model/UpdateAggregateConfigRuleRequest.h
	include/alibabacloud/config/model/UpdateAggregateConfigRuleResult.h
	include/alibabacloud/config/model/UpdateAggregateRemediationRequest.h
	include/alibabacloud/config/model/UpdateAggregateRemediationResult.h
	include/alibabacloud/config/model/UpdateAggregatorRequest.h
	include/alibabacloud/config/model/UpdateAggregatorResult.h
	include/alibabacloud/config/model/UpdateCompliancePackRequest.h
	include/alibabacloud/config/model/UpdateCompliancePackResult.h
	include/alibabacloud/config/model/UpdateConfigRuleRequest.h
	include/alibabacloud/config/model/UpdateConfigRuleResult.h )

set(config_src 
	src/ConfigClient.cc
	src/model/ActiveAggregateConfigRulesRequest.cc
	src/model/ActiveAggregateConfigRulesResult.cc
	src/model/AttachAggregateConfigRuleToCompliancePackRequest.cc
	src/model/AttachAggregateConfigRuleToCompliancePackResult.cc
	src/model/AttachConfigRuleToCompliancePackRequest.cc
	src/model/AttachConfigRuleToCompliancePackResult.cc
	src/model/CreateAggregateCompliancePackRequest.cc
	src/model/CreateAggregateCompliancePackResult.cc
	src/model/CreateAggregateConfigRuleRequest.cc
	src/model/CreateAggregateConfigRuleResult.cc
	src/model/CreateAggregateRemediationRequest.cc
	src/model/CreateAggregateRemediationResult.cc
	src/model/CreateAggregatorRequest.cc
	src/model/CreateAggregatorResult.cc
	src/model/CreateCompliancePackRequest.cc
	src/model/CreateCompliancePackResult.cc
	src/model/CreateConfigRuleRequest.cc
	src/model/CreateConfigRuleResult.cc
	src/model/CreateRemediationRequest.cc
	src/model/CreateRemediationResult.cc
	src/model/DeactiveAggregateConfigRulesRequest.cc
	src/model/DeactiveAggregateConfigRulesResult.cc
	src/model/DeactiveConfigRulesRequest.cc
	src/model/DeactiveConfigRulesResult.cc
	src/model/DeleteAggregateCompliancePacksRequest.cc
	src/model/DeleteAggregateCompliancePacksResult.cc
	src/model/DeleteAggregateConfigRulesRequest.cc
	src/model/DeleteAggregateConfigRulesResult.cc
	src/model/DeleteAggregateRemediationsRequest.cc
	src/model/DeleteAggregateRemediationsResult.cc
	src/model/DeleteAggregatorsRequest.cc
	src/model/DeleteAggregatorsResult.cc
	src/model/DeleteCompliancePacksRequest.cc
	src/model/DeleteCompliancePacksResult.cc
	src/model/DeleteRemediationsRequest.cc
	src/model/DeleteRemediationsResult.cc
	src/model/DetachAggregateConfigRuleToCompliancePackRequest.cc
	src/model/DetachAggregateConfigRuleToCompliancePackResult.cc
	src/model/DetachConfigRuleToCompliancePackRequest.cc
	src/model/DetachConfigRuleToCompliancePackResult.cc
	src/model/GenerateAggregateCompliancePackReportRequest.cc
	src/model/GenerateAggregateCompliancePackReportResult.cc
	src/model/GenerateAggregateConfigRulesReportRequest.cc
	src/model/GenerateAggregateConfigRulesReportResult.cc
	src/model/GenerateCompliancePackReportRequest.cc
	src/model/GenerateCompliancePackReportResult.cc
	src/model/GenerateConfigRulesReportRequest.cc
	src/model/GenerateConfigRulesReportResult.cc
	src/model/GetAggregateAccountComplianceByPackRequest.cc
	src/model/GetAggregateAccountComplianceByPackResult.cc
	src/model/GetAggregateCompliancePackRequest.cc
	src/model/GetAggregateCompliancePackResult.cc
	src/model/GetAggregateCompliancePackReportRequest.cc
	src/model/GetAggregateCompliancePackReportResult.cc
	src/model/GetAggregateConfigRuleRequest.cc
	src/model/GetAggregateConfigRuleResult.cc
	src/model/GetAggregateConfigRuleComplianceByPackRequest.cc
	src/model/GetAggregateConfigRuleComplianceByPackResult.cc
	src/model/GetAggregateConfigRuleSummaryByRiskLevelRequest.cc
	src/model/GetAggregateConfigRuleSummaryByRiskLevelResult.cc
	src/model/GetAggregateConfigRulesReportRequest.cc
	src/model/GetAggregateConfigRulesReportResult.cc
	src/model/GetAggregateDiscoveredResourceRequest.cc
	src/model/GetAggregateDiscoveredResourceResult.cc
	src/model/GetAggregateResourceComplianceByConfigRuleRequest.cc
	src/model/GetAggregateResourceComplianceByConfigRuleResult.cc
	src/model/GetAggregateResourceComplianceByPackRequest.cc
	src/model/GetAggregateResourceComplianceByPackResult.cc
	src/model/GetAggregateResourceComplianceGroupByRegionRequest.cc
	src/model/GetAggregateResourceComplianceGroupByRegionResult.cc
	src/model/GetAggregateResourceComplianceGroupByResourceTypeRequest.cc
	src/model/GetAggregateResourceComplianceGroupByResourceTypeResult.cc
	src/model/GetAggregateResourceComplianceTimelineRequest.cc
	src/model/GetAggregateResourceComplianceTimelineResult.cc
	src/model/GetAggregateResourceConfigurationTimelineRequest.cc
	src/model/GetAggregateResourceConfigurationTimelineResult.cc
	src/model/GetAggregateResourceCountsGroupByRegionRequest.cc
	src/model/GetAggregateResourceCountsGroupByRegionResult.cc
	src/model/GetAggregateResourceCountsGroupByResourceTypeRequest.cc
	src/model/GetAggregateResourceCountsGroupByResourceTypeResult.cc
	src/model/GetAggregatorRequest.cc
	src/model/GetAggregatorResult.cc
	src/model/GetCompliancePackRequest.cc
	src/model/GetCompliancePackResult.cc
	src/model/GetCompliancePackReportRequest.cc
	src/model/GetCompliancePackReportResult.cc
	src/model/GetConfigRuleRequest.cc
	src/model/GetConfigRuleResult.cc
	src/model/GetConfigRuleComplianceByPackRequest.cc
	src/model/GetConfigRuleComplianceByPackResult.cc
	src/model/GetConfigRuleSummaryByRiskLevelRequest.cc
	src/model/GetConfigRuleSummaryByRiskLevelResult.cc
	src/model/GetConfigRulesReportRequest.cc
	src/model/GetConfigRulesReportResult.cc
	src/model/GetDiscoveredResourceRequest.cc
	src/model/GetDiscoveredResourceResult.cc
	src/model/GetDiscoveredResourceCountsGroupByRegionRequest.cc
	src/model/GetDiscoveredResourceCountsGroupByRegionResult.cc
	src/model/GetDiscoveredResourceCountsGroupByResourceTypeRequest.cc
	src/model/GetDiscoveredResourceCountsGroupByResourceTypeResult.cc
	src/model/GetManagedRuleRequest.cc
	src/model/GetManagedRuleResult.cc
	src/model/GetResourceComplianceByConfigRuleRequest.cc
	src/model/GetResourceComplianceByConfigRuleResult.cc
	src/model/GetResourceComplianceByPackRequest.cc
	src/model/GetResourceComplianceByPackResult.cc
	src/model/GetResourceComplianceGroupByRegionRequest.cc
	src/model/GetResourceComplianceGroupByRegionResult.cc
	src/model/GetResourceComplianceGroupByResourceTypeRequest.cc
	src/model/GetResourceComplianceGroupByResourceTypeResult.cc
	src/model/GetResourceComplianceTimelineRequest.cc
	src/model/GetResourceComplianceTimelineResult.cc
	src/model/GetResourceConfigurationTimelineRequest.cc
	src/model/GetResourceConfigurationTimelineResult.cc
	src/model/IgnoreAggregateEvaluationResultsRequest.cc
	src/model/IgnoreAggregateEvaluationResultsResult.cc
	src/model/IgnoreEvaluationResultsRequest.cc
	src/model/IgnoreEvaluationResultsResult.cc
	src/model/ListAggregateCompliancePacksRequest.cc
	src/model/ListAggregateCompliancePacksResult.cc
	src/model/ListAggregateConfigRuleEvaluationResultsRequest.cc
	src/model/ListAggregateConfigRuleEvaluationResultsResult.cc
	src/model/ListAggregateConfigRulesRequest.cc
	src/model/ListAggregateConfigRulesResult.cc
	src/model/ListAggregateDiscoveredResourcesRequest.cc
	src/model/ListAggregateDiscoveredResourcesResult.cc
	src/model/ListAggregateRemediationsRequest.cc
	src/model/ListAggregateRemediationsResult.cc
	src/model/ListAggregateResourceEvaluationResultsRequest.cc
	src/model/ListAggregateResourceEvaluationResultsResult.cc
	src/model/ListAggregatorsRequest.cc
	src/model/ListAggregatorsResult.cc
	src/model/ListCompliancePackTemplatesRequest.cc
	src/model/ListCompliancePackTemplatesResult.cc
	src/model/ListCompliancePacksRequest.cc
	src/model/ListCompliancePacksResult.cc
	src/model/ListConfigRuleEvaluationResultsRequest.cc
	src/model/ListConfigRuleEvaluationResultsResult.cc
	src/model/ListDiscoveredResourcesRequest.cc
	src/model/ListDiscoveredResourcesResult.cc
	src/model/ListManagedRulesRequest.cc
	src/model/ListManagedRulesResult.cc
	src/model/ListRemediationTemplatesRequest.cc
	src/model/ListRemediationTemplatesResult.cc
	src/model/ListRemediationsRequest.cc
	src/model/ListRemediationsResult.cc
	src/model/ListResourceEvaluationResultsRequest.cc
	src/model/ListResourceEvaluationResultsResult.cc
	src/model/RevertAggregateEvaluationResultsRequest.cc
	src/model/RevertAggregateEvaluationResultsResult.cc
	src/model/RevertEvaluationResultsRequest.cc
	src/model/RevertEvaluationResultsResult.cc
	src/model/StartAggregateConfigRuleEvaluationRequest.cc
	src/model/StartAggregateConfigRuleEvaluationResult.cc
	src/model/StartAggregateRemediationRequest.cc
	src/model/StartAggregateRemediationResult.cc
	src/model/StartRemediationRequest.cc
	src/model/StartRemediationResult.cc
	src/model/UpdateAggregateCompliancePackRequest.cc
	src/model/UpdateAggregateCompliancePackResult.cc
	src/model/UpdateAggregateConfigRuleRequest.cc
	src/model/UpdateAggregateConfigRuleResult.cc
	src/model/UpdateAggregateRemediationRequest.cc
	src/model/UpdateAggregateRemediationResult.cc
	src/model/UpdateAggregatorRequest.cc
	src/model/UpdateAggregatorResult.cc
	src/model/UpdateCompliancePackRequest.cc
	src/model/UpdateCompliancePackResult.cc
	src/model/UpdateConfigRuleRequest.cc
	src/model/UpdateConfigRuleResult.cc )

add_library(config ${LIB_TYPE}
	${config_public_header}
	${config_public_header_model}
	${config_src})

set_target_properties(config
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}config
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(config
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CONFIG_LIBRARY)
endif()

target_include_directories(config
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(config
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(config
		jsoncpp)
	target_include_directories(config
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(config
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(config
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(config
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(config
		jsoncpp)
endif()

install(FILES ${config_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/config)
install(FILES ${config_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/config/model)
install(TARGETS config
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)