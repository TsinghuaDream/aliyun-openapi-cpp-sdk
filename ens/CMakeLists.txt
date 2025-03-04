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

set(ens_public_header 
	include/alibabacloud/ens/EnsClient.h
	include/alibabacloud/ens/EnsExport.h )

set(ens_public_header_model 
	include/alibabacloud/ens/model/AddBackendServersRequest.h
	include/alibabacloud/ens/model/AddBackendServersResult.h
	include/alibabacloud/ens/model/AddDeviceInternetPortRequest.h
	include/alibabacloud/ens/model/AddDeviceInternetPortResult.h
	include/alibabacloud/ens/model/AddNetworkInterfaceToInstanceRequest.h
	include/alibabacloud/ens/model/AddNetworkInterfaceToInstanceResult.h
	include/alibabacloud/ens/model/AllocateEipAddressRequest.h
	include/alibabacloud/ens/model/AllocateEipAddressResult.h
	include/alibabacloud/ens/model/AssociateEipAddressRequest.h
	include/alibabacloud/ens/model/AssociateEipAddressResult.h
	include/alibabacloud/ens/model/AssociateEnsEipAddressRequest.h
	include/alibabacloud/ens/model/AssociateEnsEipAddressResult.h
	include/alibabacloud/ens/model/AttachDiskRequest.h
	include/alibabacloud/ens/model/AttachDiskResult.h
	include/alibabacloud/ens/model/AttachEnsInstancesRequest.h
	include/alibabacloud/ens/model/AttachEnsInstancesResult.h
	include/alibabacloud/ens/model/AuthorizeSecurityGroupRequest.h
	include/alibabacloud/ens/model/AuthorizeSecurityGroupResult.h
	include/alibabacloud/ens/model/AuthorizeSecurityGroupEgressRequest.h
	include/alibabacloud/ens/model/AuthorizeSecurityGroupEgressResult.h
	include/alibabacloud/ens/model/CheckQuotaRequest.h
	include/alibabacloud/ens/model/CheckQuotaResult.h
	include/alibabacloud/ens/model/ConfigureSecurityGroupPermissionsRequest.h
	include/alibabacloud/ens/model/ConfigureSecurityGroupPermissionsResult.h
	include/alibabacloud/ens/model/CreateApplicationRequest.h
	include/alibabacloud/ens/model/CreateApplicationResult.h
	include/alibabacloud/ens/model/CreateDiskRequest.h
	include/alibabacloud/ens/model/CreateDiskResult.h
	include/alibabacloud/ens/model/CreateDiskBuyOrderRequest.h
	include/alibabacloud/ens/model/CreateDiskBuyOrderResult.h
	include/alibabacloud/ens/model/CreateEPInstanceRequest.h
	include/alibabacloud/ens/model/CreateEPInstanceResult.h
	include/alibabacloud/ens/model/CreateEipInstanceRequest.h
	include/alibabacloud/ens/model/CreateEipInstanceResult.h
	include/alibabacloud/ens/model/CreateElbBuyOrderRequest.h
	include/alibabacloud/ens/model/CreateElbBuyOrderResult.h
	include/alibabacloud/ens/model/CreateEnsServiceRequest.h
	include/alibabacloud/ens/model/CreateEnsServiceResult.h
	include/alibabacloud/ens/model/CreateEpnInstanceRequest.h
	include/alibabacloud/ens/model/CreateEpnInstanceResult.h
	include/alibabacloud/ens/model/CreateImageRequest.h
	include/alibabacloud/ens/model/CreateImageResult.h
	include/alibabacloud/ens/model/CreateInstanceRequest.h
	include/alibabacloud/ens/model/CreateInstanceResult.h
	include/alibabacloud/ens/model/CreateKeyPairRequest.h
	include/alibabacloud/ens/model/CreateKeyPairResult.h
	include/alibabacloud/ens/model/CreateLoadBalancerRequest.h
	include/alibabacloud/ens/model/CreateLoadBalancerResult.h
	include/alibabacloud/ens/model/CreateLoadBalancerHTTPListenerRequest.h
	include/alibabacloud/ens/model/CreateLoadBalancerHTTPListenerResult.h
	include/alibabacloud/ens/model/CreateLoadBalancerHTTPSListenerRequest.h
	include/alibabacloud/ens/model/CreateLoadBalancerHTTPSListenerResult.h
	include/alibabacloud/ens/model/CreateLoadBalancerTCPListenerRequest.h
	include/alibabacloud/ens/model/CreateLoadBalancerTCPListenerResult.h
	include/alibabacloud/ens/model/CreateLoadBalancerUDPListenerRequest.h
	include/alibabacloud/ens/model/CreateLoadBalancerUDPListenerResult.h
	include/alibabacloud/ens/model/CreateNetworkRequest.h
	include/alibabacloud/ens/model/CreateNetworkResult.h
	include/alibabacloud/ens/model/CreateSecurityGroupRequest.h
	include/alibabacloud/ens/model/CreateSecurityGroupResult.h
	include/alibabacloud/ens/model/CreateVSwitchRequest.h
	include/alibabacloud/ens/model/CreateVSwitchResult.h
	include/alibabacloud/ens/model/CreateVmAndSaveStockRequest.h
	include/alibabacloud/ens/model/CreateVmAndSaveStockResult.h
	include/alibabacloud/ens/model/DeleteApplicationRequest.h
	include/alibabacloud/ens/model/DeleteApplicationResult.h
	include/alibabacloud/ens/model/DeleteDeviceInternetPortRequest.h
	include/alibabacloud/ens/model/DeleteDeviceInternetPortResult.h
	include/alibabacloud/ens/model/DeleteEpnInstanceRequest.h
	include/alibabacloud/ens/model/DeleteEpnInstanceResult.h
	include/alibabacloud/ens/model/DeleteKeyPairsRequest.h
	include/alibabacloud/ens/model/DeleteKeyPairsResult.h
	include/alibabacloud/ens/model/DeleteLoadBalancerListenerRequest.h
	include/alibabacloud/ens/model/DeleteLoadBalancerListenerResult.h
	include/alibabacloud/ens/model/DeleteNetworkRequest.h
	include/alibabacloud/ens/model/DeleteNetworkResult.h
	include/alibabacloud/ens/model/DeleteSecurityGroupRequest.h
	include/alibabacloud/ens/model/DeleteSecurityGroupResult.h
	include/alibabacloud/ens/model/DeleteVSwitchRequest.h
	include/alibabacloud/ens/model/DeleteVSwitchResult.h
	include/alibabacloud/ens/model/DeleteVmRequest.h
	include/alibabacloud/ens/model/DeleteVmResult.h
	include/alibabacloud/ens/model/DescribeApplicationRequest.h
	include/alibabacloud/ens/model/DescribeApplicationResult.h
	include/alibabacloud/ens/model/DescribeApplicationResourceSummaryRequest.h
	include/alibabacloud/ens/model/DescribeApplicationResourceSummaryResult.h
	include/alibabacloud/ens/model/DescribeAvailableResourceRequest.h
	include/alibabacloud/ens/model/DescribeAvailableResourceResult.h
	include/alibabacloud/ens/model/DescribeAvailableResourceInfoRequest.h
	include/alibabacloud/ens/model/DescribeAvailableResourceInfoResult.h
	include/alibabacloud/ens/model/DescribeBandWithdChargeTypeRequest.h
	include/alibabacloud/ens/model/DescribeBandWithdChargeTypeResult.h
	include/alibabacloud/ens/model/DescribeBandwitdhByInternetChargeTypeRequest.h
	include/alibabacloud/ens/model/DescribeBandwitdhByInternetChargeTypeResult.h
	include/alibabacloud/ens/model/DescribeCloudDiskAvailableResourceInfoRequest.h
	include/alibabacloud/ens/model/DescribeCloudDiskAvailableResourceInfoResult.h
	include/alibabacloud/ens/model/DescribeCloudDiskTypesRequest.h
	include/alibabacloud/ens/model/DescribeCloudDiskTypesResult.h
	include/alibabacloud/ens/model/DescribeCreatePrePaidInstanceResultRequest.h
	include/alibabacloud/ens/model/DescribeCreatePrePaidInstanceResultResult.h
	include/alibabacloud/ens/model/DescribeDataDistResultRequest.h
	include/alibabacloud/ens/model/DescribeDataDistResultResult.h
	include/alibabacloud/ens/model/DescribeDataDownloadURLRequest.h
	include/alibabacloud/ens/model/DescribeDataDownloadURLResult.h
	include/alibabacloud/ens/model/DescribeDataPushResultRequest.h
	include/alibabacloud/ens/model/DescribeDataPushResultResult.h
	include/alibabacloud/ens/model/DescribeDeviceServiceRequest.h
	include/alibabacloud/ens/model/DescribeDeviceServiceResult.h
	include/alibabacloud/ens/model/DescribeDisksRequest.h
	include/alibabacloud/ens/model/DescribeDisksResult.h
	include/alibabacloud/ens/model/DescribeEipAddressesRequest.h
	include/alibabacloud/ens/model/DescribeEipAddressesResult.h
	include/alibabacloud/ens/model/DescribeElbAvailableResourceInfoRequest.h
	include/alibabacloud/ens/model/DescribeElbAvailableResourceInfoResult.h
	include/alibabacloud/ens/model/DescribeEnsEipAddressesRequest.h
	include/alibabacloud/ens/model/DescribeEnsEipAddressesResult.h
	include/alibabacloud/ens/model/DescribeEnsNetDistrictRequest.h
	include/alibabacloud/ens/model/DescribeEnsNetDistrictResult.h
	include/alibabacloud/ens/model/DescribeEnsNetLevelRequest.h
	include/alibabacloud/ens/model/DescribeEnsNetLevelResult.h
	include/alibabacloud/ens/model/DescribeEnsNetSaleDistrictRequest.h
	include/alibabacloud/ens/model/DescribeEnsNetSaleDistrictResult.h
	include/alibabacloud/ens/model/DescribeEnsRegionIdIpv6InfoRequest.h
	include/alibabacloud/ens/model/DescribeEnsRegionIdIpv6InfoResult.h
	include/alibabacloud/ens/model/DescribeEnsRegionIdResourceRequest.h
	include/alibabacloud/ens/model/DescribeEnsRegionIdResourceResult.h
	include/alibabacloud/ens/model/DescribeEnsRegionsRequest.h
	include/alibabacloud/ens/model/DescribeEnsRegionsResult.h
	include/alibabacloud/ens/model/DescribeEnsResourceUsageRequest.h
	include/alibabacloud/ens/model/DescribeEnsResourceUsageResult.h
	include/alibabacloud/ens/model/DescribeEpnBandWidthDataRequest.h
	include/alibabacloud/ens/model/DescribeEpnBandWidthDataResult.h
	include/alibabacloud/ens/model/DescribeEpnBandwitdhByInternetChargeTypeRequest.h
	include/alibabacloud/ens/model/DescribeEpnBandwitdhByInternetChargeTypeResult.h
	include/alibabacloud/ens/model/DescribeEpnInstanceAttributeRequest.h
	include/alibabacloud/ens/model/DescribeEpnInstanceAttributeResult.h
	include/alibabacloud/ens/model/DescribeEpnInstancesRequest.h
	include/alibabacloud/ens/model/DescribeEpnInstancesResult.h
	include/alibabacloud/ens/model/DescribeEpnMeasurementDataRequest.h
	include/alibabacloud/ens/model/DescribeEpnMeasurementDataResult.h
	include/alibabacloud/ens/model/DescribeExportImageInfoRequest.h
	include/alibabacloud/ens/model/DescribeExportImageInfoResult.h
	include/alibabacloud/ens/model/DescribeExportImageStatusRequest.h
	include/alibabacloud/ens/model/DescribeExportImageStatusResult.h
	include/alibabacloud/ens/model/DescribeImageInfosRequest.h
	include/alibabacloud/ens/model/DescribeImageInfosResult.h
	include/alibabacloud/ens/model/DescribeImageSharePermissionRequest.h
	include/alibabacloud/ens/model/DescribeImageSharePermissionResult.h
	include/alibabacloud/ens/model/DescribeImagesRequest.h
	include/alibabacloud/ens/model/DescribeImagesResult.h
	include/alibabacloud/ens/model/DescribeInstanceAutoRenewAttributeRequest.h
	include/alibabacloud/ens/model/DescribeInstanceAutoRenewAttributeResult.h
	include/alibabacloud/ens/model/DescribeInstanceMonitorDataRequest.h
	include/alibabacloud/ens/model/DescribeInstanceMonitorDataResult.h
	include/alibabacloud/ens/model/DescribeInstanceSpecRequest.h
	include/alibabacloud/ens/model/DescribeInstanceSpecResult.h
	include/alibabacloud/ens/model/DescribeInstanceTypesRequest.h
	include/alibabacloud/ens/model/DescribeInstanceTypesResult.h
	include/alibabacloud/ens/model/DescribeInstanceVncUrlRequest.h
	include/alibabacloud/ens/model/DescribeInstanceVncUrlResult.h
	include/alibabacloud/ens/model/DescribeInstancesRequest.h
	include/alibabacloud/ens/model/DescribeInstancesResult.h
	include/alibabacloud/ens/model/DescribeKeyPairsRequest.h
	include/alibabacloud/ens/model/DescribeKeyPairsResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerAttributeRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerAttributeResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerHTTPSListenerAttributeRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerHTTPSListenerAttributeResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerSpecRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerSpecResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerTCPListenerAttributeResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancerUDPListenerAttributeRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancerUDPListenerAttributeResult.h
	include/alibabacloud/ens/model/DescribeLoadBalancersRequest.h
	include/alibabacloud/ens/model/DescribeLoadBalancersResult.h
	include/alibabacloud/ens/model/DescribeMeasurementDataRequest.h
	include/alibabacloud/ens/model/DescribeMeasurementDataResult.h
	include/alibabacloud/ens/model/DescribeNetworkAttributeRequest.h
	include/alibabacloud/ens/model/DescribeNetworkAttributeResult.h
	include/alibabacloud/ens/model/DescribeNetworkInterfacesRequest.h
	include/alibabacloud/ens/model/DescribeNetworkInterfacesResult.h
	include/alibabacloud/ens/model/DescribeNetworksRequest.h
	include/alibabacloud/ens/model/DescribeNetworksResult.h
	include/alibabacloud/ens/model/DescribePrePaidInstanceStockRequest.h
	include/alibabacloud/ens/model/DescribePrePaidInstanceStockResult.h
	include/alibabacloud/ens/model/DescribePriceRequest.h
	include/alibabacloud/ens/model/DescribePriceResult.h
	include/alibabacloud/ens/model/DescribeRegionIspsRequest.h
	include/alibabacloud/ens/model/DescribeRegionIspsResult.h
	include/alibabacloud/ens/model/DescribeReservedResourceRequest.h
	include/alibabacloud/ens/model/DescribeReservedResourceResult.h
	include/alibabacloud/ens/model/DescribeSecurityGroupAttributeRequest.h
	include/alibabacloud/ens/model/DescribeSecurityGroupAttributeResult.h
	include/alibabacloud/ens/model/DescribeSecurityGroupsRequest.h
	include/alibabacloud/ens/model/DescribeSecurityGroupsResult.h
	include/alibabacloud/ens/model/DescribeServcieScheduleRequest.h
	include/alibabacloud/ens/model/DescribeServcieScheduleResult.h
	include/alibabacloud/ens/model/DescribeUserBandWidthDataRequest.h
	include/alibabacloud/ens/model/DescribeUserBandWidthDataResult.h
	include/alibabacloud/ens/model/DescribeVSwitchesRequest.h
	include/alibabacloud/ens/model/DescribeVSwitchesResult.h
	include/alibabacloud/ens/model/DetachDiskRequest.h
	include/alibabacloud/ens/model/DetachDiskResult.h
	include/alibabacloud/ens/model/DistApplicationDataRequest.h
	include/alibabacloud/ens/model/DistApplicationDataResult.h
	include/alibabacloud/ens/model/ExportBillDetailDataRequest.h
	include/alibabacloud/ens/model/ExportBillDetailDataResult.h
	include/alibabacloud/ens/model/ExportImageRequest.h
	include/alibabacloud/ens/model/ExportImageResult.h
	include/alibabacloud/ens/model/ExportMeasurementDataRequest.h
	include/alibabacloud/ens/model/ExportMeasurementDataResult.h
	include/alibabacloud/ens/model/GetDeviceInternetPortRequest.h
	include/alibabacloud/ens/model/GetDeviceInternetPortResult.h
	include/alibabacloud/ens/model/GetVmListRequest.h
	include/alibabacloud/ens/model/GetVmListResult.h
	include/alibabacloud/ens/model/ImportKeyPairRequest.h
	include/alibabacloud/ens/model/ImportKeyPairResult.h
	include/alibabacloud/ens/model/JoinPublicIpsToEpnInstanceRequest.h
	include/alibabacloud/ens/model/JoinPublicIpsToEpnInstanceResult.h
	include/alibabacloud/ens/model/JoinSecurityGroupRequest.h
	include/alibabacloud/ens/model/JoinSecurityGroupResult.h
	include/alibabacloud/ens/model/JoinVSwitchesToEpnInstanceRequest.h
	include/alibabacloud/ens/model/JoinVSwitchesToEpnInstanceResult.h
	include/alibabacloud/ens/model/LeaveSecurityGroupRequest.h
	include/alibabacloud/ens/model/LeaveSecurityGroupResult.h
	include/alibabacloud/ens/model/ListApplicationsRequest.h
	include/alibabacloud/ens/model/ListApplicationsResult.h
	include/alibabacloud/ens/model/MigrateVmRequest.h
	include/alibabacloud/ens/model/MigrateVmResult.h
	include/alibabacloud/ens/model/ModifyEnsEipAddressAttributeRequest.h
	include/alibabacloud/ens/model/ModifyEnsEipAddressAttributeResult.h
	include/alibabacloud/ens/model/ModifyEpnInstanceRequest.h
	include/alibabacloud/ens/model/ModifyEpnInstanceResult.h
	include/alibabacloud/ens/model/ModifyImageAttributeRequest.h
	include/alibabacloud/ens/model/ModifyImageAttributeResult.h
	include/alibabacloud/ens/model/ModifyImageSharePermissionRequest.h
	include/alibabacloud/ens/model/ModifyImageSharePermissionResult.h
	include/alibabacloud/ens/model/ModifyInstanceAttributeRequest.h
	include/alibabacloud/ens/model/ModifyInstanceAttributeResult.h
	include/alibabacloud/ens/model/ModifyInstanceAutoRenewAttributeRequest.h
	include/alibabacloud/ens/model/ModifyInstanceAutoRenewAttributeResult.h
	include/alibabacloud/ens/model/ModifyLoadBalancerAttributeRequest.h
	include/alibabacloud/ens/model/ModifyLoadBalancerAttributeResult.h
	include/alibabacloud/ens/model/ModifyNetworkAttributeRequest.h
	include/alibabacloud/ens/model/ModifyNetworkAttributeResult.h
	include/alibabacloud/ens/model/ModifySecurityGroupAttributeRequest.h
	include/alibabacloud/ens/model/ModifySecurityGroupAttributeResult.h
	include/alibabacloud/ens/model/ModifyVSwitchAttributeRequest.h
	include/alibabacloud/ens/model/ModifyVSwitchAttributeResult.h
	include/alibabacloud/ens/model/PreCreateEnsServiceRequest.h
	include/alibabacloud/ens/model/PreCreateEnsServiceResult.h
	include/alibabacloud/ens/model/PushApplicationDataRequest.h
	include/alibabacloud/ens/model/PushApplicationDataResult.h
	include/alibabacloud/ens/model/ReInitDiskRequest.h
	include/alibabacloud/ens/model/ReInitDiskResult.h
	include/alibabacloud/ens/model/RebootInstanceRequest.h
	include/alibabacloud/ens/model/RebootInstanceResult.h
	include/alibabacloud/ens/model/ReleaseEipAddressRequest.h
	include/alibabacloud/ens/model/ReleaseEipAddressResult.h
	include/alibabacloud/ens/model/ReleaseInstanceRequest.h
	include/alibabacloud/ens/model/ReleaseInstanceResult.h
	include/alibabacloud/ens/model/ReleasePostPaidInstanceRequest.h
	include/alibabacloud/ens/model/ReleasePostPaidInstanceResult.h
	include/alibabacloud/ens/model/ReleasePrePaidInstanceRequest.h
	include/alibabacloud/ens/model/ReleasePrePaidInstanceResult.h
	include/alibabacloud/ens/model/RemoveBackendServersRequest.h
	include/alibabacloud/ens/model/RemoveBackendServersResult.h
	include/alibabacloud/ens/model/RemovePublicIpsFromEpnInstanceRequest.h
	include/alibabacloud/ens/model/RemovePublicIpsFromEpnInstanceResult.h
	include/alibabacloud/ens/model/RemoveVSwitchesFromEpnInstanceRequest.h
	include/alibabacloud/ens/model/RemoveVSwitchesFromEpnInstanceResult.h
	include/alibabacloud/ens/model/RenewInstanceRequest.h
	include/alibabacloud/ens/model/RenewInstanceResult.h
	include/alibabacloud/ens/model/RescaleApplicationRequest.h
	include/alibabacloud/ens/model/RescaleApplicationResult.h
	include/alibabacloud/ens/model/RescaleDeviceServiceRequest.h
	include/alibabacloud/ens/model/RescaleDeviceServiceResult.h
	include/alibabacloud/ens/model/ResetDeviceInstanceRequest.h
	include/alibabacloud/ens/model/ResetDeviceInstanceResult.h
	include/alibabacloud/ens/model/RestartDeviceInstanceRequest.h
	include/alibabacloud/ens/model/RestartDeviceInstanceResult.h
	include/alibabacloud/ens/model/RevokeSecurityGroupRequest.h
	include/alibabacloud/ens/model/RevokeSecurityGroupResult.h
	include/alibabacloud/ens/model/RevokeSecurityGroupEgressRequest.h
	include/alibabacloud/ens/model/RevokeSecurityGroupEgressResult.h
	include/alibabacloud/ens/model/RollbackApplicationRequest.h
	include/alibabacloud/ens/model/RollbackApplicationResult.h
	include/alibabacloud/ens/model/RunInstancesRequest.h
	include/alibabacloud/ens/model/RunInstancesResult.h
	include/alibabacloud/ens/model/RunServiceScheduleRequest.h
	include/alibabacloud/ens/model/RunServiceScheduleResult.h
	include/alibabacloud/ens/model/SchedulePodRequest.h
	include/alibabacloud/ens/model/SchedulePodResult.h
	include/alibabacloud/ens/model/SetBackendServersRequest.h
	include/alibabacloud/ens/model/SetBackendServersResult.h
	include/alibabacloud/ens/model/SetLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/ens/model/SetLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/ens/model/SetLoadBalancerHTTPSListenerAttributeRequest.h
	include/alibabacloud/ens/model/SetLoadBalancerHTTPSListenerAttributeResult.h
	include/alibabacloud/ens/model/SetLoadBalancerStatusRequest.h
	include/alibabacloud/ens/model/SetLoadBalancerStatusResult.h
	include/alibabacloud/ens/model/SetLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/ens/model/SetLoadBalancerTCPListenerAttributeResult.h
	include/alibabacloud/ens/model/SetLoadBalancerUDPListenerAttributeRequest.h
	include/alibabacloud/ens/model/SetLoadBalancerUDPListenerAttributeResult.h
	include/alibabacloud/ens/model/StartEpnInstanceRequest.h
	include/alibabacloud/ens/model/StartEpnInstanceResult.h
	include/alibabacloud/ens/model/StartInstanceRequest.h
	include/alibabacloud/ens/model/StartInstanceResult.h
	include/alibabacloud/ens/model/StartLoadBalancerListenerRequest.h
	include/alibabacloud/ens/model/StartLoadBalancerListenerResult.h
	include/alibabacloud/ens/model/StopEpnInstanceRequest.h
	include/alibabacloud/ens/model/StopEpnInstanceResult.h
	include/alibabacloud/ens/model/StopInstanceRequest.h
	include/alibabacloud/ens/model/StopInstanceResult.h
	include/alibabacloud/ens/model/StopLoadBalancerListenerRequest.h
	include/alibabacloud/ens/model/StopLoadBalancerListenerResult.h
	include/alibabacloud/ens/model/UnAssociateEnsEipAddressRequest.h
	include/alibabacloud/ens/model/UnAssociateEnsEipAddressResult.h
	include/alibabacloud/ens/model/UnassociateEipAddressRequest.h
	include/alibabacloud/ens/model/UnassociateEipAddressResult.h
	include/alibabacloud/ens/model/UpgradeApplicationRequest.h
	include/alibabacloud/ens/model/UpgradeApplicationResult.h )

set(ens_src 
	src/EnsClient.cc
	src/model/AddBackendServersRequest.cc
	src/model/AddBackendServersResult.cc
	src/model/AddDeviceInternetPortRequest.cc
	src/model/AddDeviceInternetPortResult.cc
	src/model/AddNetworkInterfaceToInstanceRequest.cc
	src/model/AddNetworkInterfaceToInstanceResult.cc
	src/model/AllocateEipAddressRequest.cc
	src/model/AllocateEipAddressResult.cc
	src/model/AssociateEipAddressRequest.cc
	src/model/AssociateEipAddressResult.cc
	src/model/AssociateEnsEipAddressRequest.cc
	src/model/AssociateEnsEipAddressResult.cc
	src/model/AttachDiskRequest.cc
	src/model/AttachDiskResult.cc
	src/model/AttachEnsInstancesRequest.cc
	src/model/AttachEnsInstancesResult.cc
	src/model/AuthorizeSecurityGroupRequest.cc
	src/model/AuthorizeSecurityGroupResult.cc
	src/model/AuthorizeSecurityGroupEgressRequest.cc
	src/model/AuthorizeSecurityGroupEgressResult.cc
	src/model/CheckQuotaRequest.cc
	src/model/CheckQuotaResult.cc
	src/model/ConfigureSecurityGroupPermissionsRequest.cc
	src/model/ConfigureSecurityGroupPermissionsResult.cc
	src/model/CreateApplicationRequest.cc
	src/model/CreateApplicationResult.cc
	src/model/CreateDiskRequest.cc
	src/model/CreateDiskResult.cc
	src/model/CreateDiskBuyOrderRequest.cc
	src/model/CreateDiskBuyOrderResult.cc
	src/model/CreateEPInstanceRequest.cc
	src/model/CreateEPInstanceResult.cc
	src/model/CreateEipInstanceRequest.cc
	src/model/CreateEipInstanceResult.cc
	src/model/CreateElbBuyOrderRequest.cc
	src/model/CreateElbBuyOrderResult.cc
	src/model/CreateEnsServiceRequest.cc
	src/model/CreateEnsServiceResult.cc
	src/model/CreateEpnInstanceRequest.cc
	src/model/CreateEpnInstanceResult.cc
	src/model/CreateImageRequest.cc
	src/model/CreateImageResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateKeyPairRequest.cc
	src/model/CreateKeyPairResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateLoadBalancerHTTPListenerRequest.cc
	src/model/CreateLoadBalancerHTTPListenerResult.cc
	src/model/CreateLoadBalancerHTTPSListenerRequest.cc
	src/model/CreateLoadBalancerHTTPSListenerResult.cc
	src/model/CreateLoadBalancerTCPListenerRequest.cc
	src/model/CreateLoadBalancerTCPListenerResult.cc
	src/model/CreateLoadBalancerUDPListenerRequest.cc
	src/model/CreateLoadBalancerUDPListenerResult.cc
	src/model/CreateNetworkRequest.cc
	src/model/CreateNetworkResult.cc
	src/model/CreateSecurityGroupRequest.cc
	src/model/CreateSecurityGroupResult.cc
	src/model/CreateVSwitchRequest.cc
	src/model/CreateVSwitchResult.cc
	src/model/CreateVmAndSaveStockRequest.cc
	src/model/CreateVmAndSaveStockResult.cc
	src/model/DeleteApplicationRequest.cc
	src/model/DeleteApplicationResult.cc
	src/model/DeleteDeviceInternetPortRequest.cc
	src/model/DeleteDeviceInternetPortResult.cc
	src/model/DeleteEpnInstanceRequest.cc
	src/model/DeleteEpnInstanceResult.cc
	src/model/DeleteKeyPairsRequest.cc
	src/model/DeleteKeyPairsResult.cc
	src/model/DeleteLoadBalancerListenerRequest.cc
	src/model/DeleteLoadBalancerListenerResult.cc
	src/model/DeleteNetworkRequest.cc
	src/model/DeleteNetworkResult.cc
	src/model/DeleteSecurityGroupRequest.cc
	src/model/DeleteSecurityGroupResult.cc
	src/model/DeleteVSwitchRequest.cc
	src/model/DeleteVSwitchResult.cc
	src/model/DeleteVmRequest.cc
	src/model/DeleteVmResult.cc
	src/model/DescribeApplicationRequest.cc
	src/model/DescribeApplicationResult.cc
	src/model/DescribeApplicationResourceSummaryRequest.cc
	src/model/DescribeApplicationResourceSummaryResult.cc
	src/model/DescribeAvailableResourceRequest.cc
	src/model/DescribeAvailableResourceResult.cc
	src/model/DescribeAvailableResourceInfoRequest.cc
	src/model/DescribeAvailableResourceInfoResult.cc
	src/model/DescribeBandWithdChargeTypeRequest.cc
	src/model/DescribeBandWithdChargeTypeResult.cc
	src/model/DescribeBandwitdhByInternetChargeTypeRequest.cc
	src/model/DescribeBandwitdhByInternetChargeTypeResult.cc
	src/model/DescribeCloudDiskAvailableResourceInfoRequest.cc
	src/model/DescribeCloudDiskAvailableResourceInfoResult.cc
	src/model/DescribeCloudDiskTypesRequest.cc
	src/model/DescribeCloudDiskTypesResult.cc
	src/model/DescribeCreatePrePaidInstanceResultRequest.cc
	src/model/DescribeCreatePrePaidInstanceResultResult.cc
	src/model/DescribeDataDistResultRequest.cc
	src/model/DescribeDataDistResultResult.cc
	src/model/DescribeDataDownloadURLRequest.cc
	src/model/DescribeDataDownloadURLResult.cc
	src/model/DescribeDataPushResultRequest.cc
	src/model/DescribeDataPushResultResult.cc
	src/model/DescribeDeviceServiceRequest.cc
	src/model/DescribeDeviceServiceResult.cc
	src/model/DescribeDisksRequest.cc
	src/model/DescribeDisksResult.cc
	src/model/DescribeEipAddressesRequest.cc
	src/model/DescribeEipAddressesResult.cc
	src/model/DescribeElbAvailableResourceInfoRequest.cc
	src/model/DescribeElbAvailableResourceInfoResult.cc
	src/model/DescribeEnsEipAddressesRequest.cc
	src/model/DescribeEnsEipAddressesResult.cc
	src/model/DescribeEnsNetDistrictRequest.cc
	src/model/DescribeEnsNetDistrictResult.cc
	src/model/DescribeEnsNetLevelRequest.cc
	src/model/DescribeEnsNetLevelResult.cc
	src/model/DescribeEnsNetSaleDistrictRequest.cc
	src/model/DescribeEnsNetSaleDistrictResult.cc
	src/model/DescribeEnsRegionIdIpv6InfoRequest.cc
	src/model/DescribeEnsRegionIdIpv6InfoResult.cc
	src/model/DescribeEnsRegionIdResourceRequest.cc
	src/model/DescribeEnsRegionIdResourceResult.cc
	src/model/DescribeEnsRegionsRequest.cc
	src/model/DescribeEnsRegionsResult.cc
	src/model/DescribeEnsResourceUsageRequest.cc
	src/model/DescribeEnsResourceUsageResult.cc
	src/model/DescribeEpnBandWidthDataRequest.cc
	src/model/DescribeEpnBandWidthDataResult.cc
	src/model/DescribeEpnBandwitdhByInternetChargeTypeRequest.cc
	src/model/DescribeEpnBandwitdhByInternetChargeTypeResult.cc
	src/model/DescribeEpnInstanceAttributeRequest.cc
	src/model/DescribeEpnInstanceAttributeResult.cc
	src/model/DescribeEpnInstancesRequest.cc
	src/model/DescribeEpnInstancesResult.cc
	src/model/DescribeEpnMeasurementDataRequest.cc
	src/model/DescribeEpnMeasurementDataResult.cc
	src/model/DescribeExportImageInfoRequest.cc
	src/model/DescribeExportImageInfoResult.cc
	src/model/DescribeExportImageStatusRequest.cc
	src/model/DescribeExportImageStatusResult.cc
	src/model/DescribeImageInfosRequest.cc
	src/model/DescribeImageInfosResult.cc
	src/model/DescribeImageSharePermissionRequest.cc
	src/model/DescribeImageSharePermissionResult.cc
	src/model/DescribeImagesRequest.cc
	src/model/DescribeImagesResult.cc
	src/model/DescribeInstanceAutoRenewAttributeRequest.cc
	src/model/DescribeInstanceAutoRenewAttributeResult.cc
	src/model/DescribeInstanceMonitorDataRequest.cc
	src/model/DescribeInstanceMonitorDataResult.cc
	src/model/DescribeInstanceSpecRequest.cc
	src/model/DescribeInstanceSpecResult.cc
	src/model/DescribeInstanceTypesRequest.cc
	src/model/DescribeInstanceTypesResult.cc
	src/model/DescribeInstanceVncUrlRequest.cc
	src/model/DescribeInstanceVncUrlResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeKeyPairsRequest.cc
	src/model/DescribeKeyPairsResult.cc
	src/model/DescribeLoadBalancerAttributeRequest.cc
	src/model/DescribeLoadBalancerAttributeResult.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeResult.cc
	src/model/DescribeLoadBalancerHTTPSListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerHTTPSListenerAttributeResult.cc
	src/model/DescribeLoadBalancerSpecRequest.cc
	src/model/DescribeLoadBalancerSpecResult.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeResult.cc
	src/model/DescribeLoadBalancerUDPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerUDPListenerAttributeResult.cc
	src/model/DescribeLoadBalancersRequest.cc
	src/model/DescribeLoadBalancersResult.cc
	src/model/DescribeMeasurementDataRequest.cc
	src/model/DescribeMeasurementDataResult.cc
	src/model/DescribeNetworkAttributeRequest.cc
	src/model/DescribeNetworkAttributeResult.cc
	src/model/DescribeNetworkInterfacesRequest.cc
	src/model/DescribeNetworkInterfacesResult.cc
	src/model/DescribeNetworksRequest.cc
	src/model/DescribeNetworksResult.cc
	src/model/DescribePrePaidInstanceStockRequest.cc
	src/model/DescribePrePaidInstanceStockResult.cc
	src/model/DescribePriceRequest.cc
	src/model/DescribePriceResult.cc
	src/model/DescribeRegionIspsRequest.cc
	src/model/DescribeRegionIspsResult.cc
	src/model/DescribeReservedResourceRequest.cc
	src/model/DescribeReservedResourceResult.cc
	src/model/DescribeSecurityGroupAttributeRequest.cc
	src/model/DescribeSecurityGroupAttributeResult.cc
	src/model/DescribeSecurityGroupsRequest.cc
	src/model/DescribeSecurityGroupsResult.cc
	src/model/DescribeServcieScheduleRequest.cc
	src/model/DescribeServcieScheduleResult.cc
	src/model/DescribeUserBandWidthDataRequest.cc
	src/model/DescribeUserBandWidthDataResult.cc
	src/model/DescribeVSwitchesRequest.cc
	src/model/DescribeVSwitchesResult.cc
	src/model/DetachDiskRequest.cc
	src/model/DetachDiskResult.cc
	src/model/DistApplicationDataRequest.cc
	src/model/DistApplicationDataResult.cc
	src/model/ExportBillDetailDataRequest.cc
	src/model/ExportBillDetailDataResult.cc
	src/model/ExportImageRequest.cc
	src/model/ExportImageResult.cc
	src/model/ExportMeasurementDataRequest.cc
	src/model/ExportMeasurementDataResult.cc
	src/model/GetDeviceInternetPortRequest.cc
	src/model/GetDeviceInternetPortResult.cc
	src/model/GetVmListRequest.cc
	src/model/GetVmListResult.cc
	src/model/ImportKeyPairRequest.cc
	src/model/ImportKeyPairResult.cc
	src/model/JoinPublicIpsToEpnInstanceRequest.cc
	src/model/JoinPublicIpsToEpnInstanceResult.cc
	src/model/JoinSecurityGroupRequest.cc
	src/model/JoinSecurityGroupResult.cc
	src/model/JoinVSwitchesToEpnInstanceRequest.cc
	src/model/JoinVSwitchesToEpnInstanceResult.cc
	src/model/LeaveSecurityGroupRequest.cc
	src/model/LeaveSecurityGroupResult.cc
	src/model/ListApplicationsRequest.cc
	src/model/ListApplicationsResult.cc
	src/model/MigrateVmRequest.cc
	src/model/MigrateVmResult.cc
	src/model/ModifyEnsEipAddressAttributeRequest.cc
	src/model/ModifyEnsEipAddressAttributeResult.cc
	src/model/ModifyEpnInstanceRequest.cc
	src/model/ModifyEpnInstanceResult.cc
	src/model/ModifyImageAttributeRequest.cc
	src/model/ModifyImageAttributeResult.cc
	src/model/ModifyImageSharePermissionRequest.cc
	src/model/ModifyImageSharePermissionResult.cc
	src/model/ModifyInstanceAttributeRequest.cc
	src/model/ModifyInstanceAttributeResult.cc
	src/model/ModifyInstanceAutoRenewAttributeRequest.cc
	src/model/ModifyInstanceAutoRenewAttributeResult.cc
	src/model/ModifyLoadBalancerAttributeRequest.cc
	src/model/ModifyLoadBalancerAttributeResult.cc
	src/model/ModifyNetworkAttributeRequest.cc
	src/model/ModifyNetworkAttributeResult.cc
	src/model/ModifySecurityGroupAttributeRequest.cc
	src/model/ModifySecurityGroupAttributeResult.cc
	src/model/ModifyVSwitchAttributeRequest.cc
	src/model/ModifyVSwitchAttributeResult.cc
	src/model/PreCreateEnsServiceRequest.cc
	src/model/PreCreateEnsServiceResult.cc
	src/model/PushApplicationDataRequest.cc
	src/model/PushApplicationDataResult.cc
	src/model/ReInitDiskRequest.cc
	src/model/ReInitDiskResult.cc
	src/model/RebootInstanceRequest.cc
	src/model/RebootInstanceResult.cc
	src/model/ReleaseEipAddressRequest.cc
	src/model/ReleaseEipAddressResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/ReleasePostPaidInstanceRequest.cc
	src/model/ReleasePostPaidInstanceResult.cc
	src/model/ReleasePrePaidInstanceRequest.cc
	src/model/ReleasePrePaidInstanceResult.cc
	src/model/RemoveBackendServersRequest.cc
	src/model/RemoveBackendServersResult.cc
	src/model/RemovePublicIpsFromEpnInstanceRequest.cc
	src/model/RemovePublicIpsFromEpnInstanceResult.cc
	src/model/RemoveVSwitchesFromEpnInstanceRequest.cc
	src/model/RemoveVSwitchesFromEpnInstanceResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/RescaleApplicationRequest.cc
	src/model/RescaleApplicationResult.cc
	src/model/RescaleDeviceServiceRequest.cc
	src/model/RescaleDeviceServiceResult.cc
	src/model/ResetDeviceInstanceRequest.cc
	src/model/ResetDeviceInstanceResult.cc
	src/model/RestartDeviceInstanceRequest.cc
	src/model/RestartDeviceInstanceResult.cc
	src/model/RevokeSecurityGroupRequest.cc
	src/model/RevokeSecurityGroupResult.cc
	src/model/RevokeSecurityGroupEgressRequest.cc
	src/model/RevokeSecurityGroupEgressResult.cc
	src/model/RollbackApplicationRequest.cc
	src/model/RollbackApplicationResult.cc
	src/model/RunInstancesRequest.cc
	src/model/RunInstancesResult.cc
	src/model/RunServiceScheduleRequest.cc
	src/model/RunServiceScheduleResult.cc
	src/model/SchedulePodRequest.cc
	src/model/SchedulePodResult.cc
	src/model/SetBackendServersRequest.cc
	src/model/SetBackendServersResult.cc
	src/model/SetLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/SetLoadBalancerHTTPListenerAttributeResult.cc
	src/model/SetLoadBalancerHTTPSListenerAttributeRequest.cc
	src/model/SetLoadBalancerHTTPSListenerAttributeResult.cc
	src/model/SetLoadBalancerStatusRequest.cc
	src/model/SetLoadBalancerStatusResult.cc
	src/model/SetLoadBalancerTCPListenerAttributeRequest.cc
	src/model/SetLoadBalancerTCPListenerAttributeResult.cc
	src/model/SetLoadBalancerUDPListenerAttributeRequest.cc
	src/model/SetLoadBalancerUDPListenerAttributeResult.cc
	src/model/StartEpnInstanceRequest.cc
	src/model/StartEpnInstanceResult.cc
	src/model/StartInstanceRequest.cc
	src/model/StartInstanceResult.cc
	src/model/StartLoadBalancerListenerRequest.cc
	src/model/StartLoadBalancerListenerResult.cc
	src/model/StopEpnInstanceRequest.cc
	src/model/StopEpnInstanceResult.cc
	src/model/StopInstanceRequest.cc
	src/model/StopInstanceResult.cc
	src/model/StopLoadBalancerListenerRequest.cc
	src/model/StopLoadBalancerListenerResult.cc
	src/model/UnAssociateEnsEipAddressRequest.cc
	src/model/UnAssociateEnsEipAddressResult.cc
	src/model/UnassociateEipAddressRequest.cc
	src/model/UnassociateEipAddressResult.cc
	src/model/UpgradeApplicationRequest.cc
	src/model/UpgradeApplicationResult.cc )

add_library(ens ${LIB_TYPE}
	${ens_public_header}
	${ens_public_header_model}
	${ens_src})

set_target_properties(ens
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ens
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ens
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ENS_LIBRARY)
endif()

target_include_directories(ens
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ens
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ens
		jsoncpp)
	target_include_directories(ens
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ens
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ens
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ens
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ens
		jsoncpp)
endif()

install(FILES ${ens_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ens)
install(FILES ${ens_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ens/model)
install(TARGETS ens
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)