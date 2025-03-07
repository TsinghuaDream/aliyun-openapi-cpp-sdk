/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/alb/model/GetLoadBalancerAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

GetLoadBalancerAttributeResult::GetLoadBalancerAttributeResult() :
	ServiceResult()
{}

GetLoadBalancerAttributeResult::GetLoadBalancerAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLoadBalancerAttributeResult::~GetLoadBalancerAttributeResult()
{}

void GetLoadBalancerAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLoadBalancerOperationLocksNode = value["LoadBalancerOperationLocks"]["LoadBalancerOperationLock"];
	for (auto valueLoadBalancerOperationLocksLoadBalancerOperationLock : allLoadBalancerOperationLocksNode)
	{
		LoadBalancerOperationLock loadBalancerOperationLocksObject;
		if(!valueLoadBalancerOperationLocksLoadBalancerOperationLock["LockReason"].isNull())
			loadBalancerOperationLocksObject.lockReason = valueLoadBalancerOperationLocksLoadBalancerOperationLock["LockReason"].asString();
		if(!valueLoadBalancerOperationLocksLoadBalancerOperationLock["LockType"].isNull())
			loadBalancerOperationLocksObject.lockType = valueLoadBalancerOperationLocksLoadBalancerOperationLock["LockType"].asString();
		loadBalancerOperationLocks_.push_back(loadBalancerOperationLocksObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allZoneMappingsNode = value["ZoneMappings"]["ZoneMapping"];
	for (auto valueZoneMappingsZoneMapping : allZoneMappingsNode)
	{
		ZoneMapping zoneMappingsObject;
		if(!valueZoneMappingsZoneMapping["VSwitchId"].isNull())
			zoneMappingsObject.vSwitchId = valueZoneMappingsZoneMapping["VSwitchId"].asString();
		if(!valueZoneMappingsZoneMapping["ZoneId"].isNull())
			zoneMappingsObject.zoneId = valueZoneMappingsZoneMapping["ZoneId"].asString();
		auto allLoadBalancerAddressesNode = valueZoneMappingsZoneMapping["LoadBalancerAddresses"]["LoadBalancerAddress"];
		for (auto valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress : allLoadBalancerAddressesNode)
		{
			ZoneMapping::LoadBalancerAddress loadBalancerAddressesObject;
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Address"].isNull())
				loadBalancerAddressesObject.address = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Address"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].isNull())
				loadBalancerAddressesObject.ipv6Address = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["Ipv6Address"].asString();
			if(!valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["IntranetAddress"].isNull())
				loadBalancerAddressesObject.intranetAddress = valueZoneMappingsZoneMappingLoadBalancerAddressesLoadBalancerAddress["IntranetAddress"].asString();
			zoneMappingsObject.loadBalancerAddresses.push_back(loadBalancerAddressesObject);
		}
		zoneMappings_.push_back(zoneMappingsObject);
	}
	auto accessLogConfigNode = value["AccessLogConfig"];
	if(!accessLogConfigNode["LogProject"].isNull())
		accessLogConfig_.logProject = accessLogConfigNode["LogProject"].asString();
	if(!accessLogConfigNode["LogStore"].isNull())
		accessLogConfig_.logStore = accessLogConfigNode["LogStore"].asString();
	auto deletionProtectionConfigNode = value["DeletionProtectionConfig"];
	if(!deletionProtectionConfigNode["Enabled"].isNull())
		deletionProtectionConfig_.enabled = deletionProtectionConfigNode["Enabled"].asString() == "true";
	if(!deletionProtectionConfigNode["EnabledTime"].isNull())
		deletionProtectionConfig_.enabledTime = deletionProtectionConfigNode["EnabledTime"].asString();
	auto loadBalancerBillingConfigNode = value["LoadBalancerBillingConfig"];
	if(!loadBalancerBillingConfigNode["InternetBandwidth"].isNull())
		loadBalancerBillingConfig_.internetBandwidth = std::stoi(loadBalancerBillingConfigNode["InternetBandwidth"].asString());
	if(!loadBalancerBillingConfigNode["InternetChargeType"].isNull())
		loadBalancerBillingConfig_.internetChargeType = loadBalancerBillingConfigNode["InternetChargeType"].asString();
	if(!loadBalancerBillingConfigNode["PayType"].isNull())
		loadBalancerBillingConfig_.payType = loadBalancerBillingConfigNode["PayType"].asString();
	auto modificationProtectionConfigNode = value["ModificationProtectionConfig"];
	if(!modificationProtectionConfigNode["Reason"].isNull())
		modificationProtectionConfig_.reason = modificationProtectionConfigNode["Reason"].asString();
	if(!modificationProtectionConfigNode["Status"].isNull())
		modificationProtectionConfig_.status = modificationProtectionConfigNode["Status"].asString();
	auto allFeatureLabels = value["FeatureLabels"]["FeatureLabel"];
	for (const auto &item : allFeatureLabels)
		featureLabels_.push_back(item.asString());
	if(!value["AddressAllocatedMode"].isNull())
		addressAllocatedMode_ = value["AddressAllocatedMode"].asString();
	if(!value["AddressType"].isNull())
		addressType_ = value["AddressType"].asString();
	if(!value["BandwidthCapacity"].isNull())
		bandwidthCapacity_ = std::stoi(value["BandwidthCapacity"].asString());
	if(!value["BandwidthPackageId"].isNull())
		bandwidthPackageId_ = value["BandwidthPackageId"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["DNSName"].isNull())
		dNSName_ = value["DNSName"].asString();
	if(!value["LoadBalancerBussinessStatus"].isNull())
		loadBalancerBussinessStatus_ = value["LoadBalancerBussinessStatus"].asString();
	if(!value["LoadBalancerEdition"].isNull())
		loadBalancerEdition_ = value["LoadBalancerEdition"].asString();
	if(!value["LoadBalancerId"].isNull())
		loadBalancerId_ = value["LoadBalancerId"].asString();
	if(!value["LoadBalancerName"].isNull())
		loadBalancerName_ = value["LoadBalancerName"].asString();
	if(!value["ServiceManagedEnabled"].isNull())
		serviceManagedEnabled_ = value["ServiceManagedEnabled"].asString() == "true";
	if(!value["ServiceManagedMode"].isNull())
		serviceManagedMode_ = value["ServiceManagedMode"].asString();
	if(!value["LoadBalancerStatus"].isNull())
		loadBalancerStatus_ = value["LoadBalancerStatus"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["ConfigManagedEnabled"].isNull())
		configManagedEnabled_ = value["ConfigManagedEnabled"].asString() == "true";
	if(!value["AddressIpVersion"].isNull())
		addressIpVersion_ = value["AddressIpVersion"].asString();
	if(!value["Ipv6AddressType"].isNull())
		ipv6AddressType_ = value["Ipv6AddressType"].asString();

}

bool GetLoadBalancerAttributeResult::getServiceManagedEnabled()const
{
	return serviceManagedEnabled_;
}

std::string GetLoadBalancerAttributeResult::getAddressIpVersion()const
{
	return addressIpVersion_;
}

std::string GetLoadBalancerAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::vector<std::string> GetLoadBalancerAttributeResult::getFeatureLabels()const
{
	return featureLabels_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerId()const
{
	return loadBalancerId_;
}

std::vector<GetLoadBalancerAttributeResult::ZoneMapping> GetLoadBalancerAttributeResult::getZoneMappings()const
{
	return zoneMappings_;
}

std::string GetLoadBalancerAttributeResult::getDNSName()const
{
	return dNSName_;
}

std::string GetLoadBalancerAttributeResult::getIpv6AddressType()const
{
	return ipv6AddressType_;
}

int GetLoadBalancerAttributeResult::getBandwidthCapacity()const
{
	return bandwidthCapacity_;
}

GetLoadBalancerAttributeResult::DeletionProtectionConfig GetLoadBalancerAttributeResult::getDeletionProtectionConfig()const
{
	return deletionProtectionConfig_;
}

std::string GetLoadBalancerAttributeResult::getServiceManagedMode()const
{
	return serviceManagedMode_;
}

std::string GetLoadBalancerAttributeResult::getBandwidthPackageId()const
{
	return bandwidthPackageId_;
}

std::vector<GetLoadBalancerAttributeResult::Tag> GetLoadBalancerAttributeResult::getTags()const
{
	return tags_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerEdition()const
{
	return loadBalancerEdition_;
}

GetLoadBalancerAttributeResult::LoadBalancerBillingConfig GetLoadBalancerAttributeResult::getLoadBalancerBillingConfig()const
{
	return loadBalancerBillingConfig_;
}

std::string GetLoadBalancerAttributeResult::getCreateTime()const
{
	return createTime_;
}

GetLoadBalancerAttributeResult::ModificationProtectionConfig GetLoadBalancerAttributeResult::getModificationProtectionConfig()const
{
	return modificationProtectionConfig_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerName()const
{
	return loadBalancerName_;
}

GetLoadBalancerAttributeResult::AccessLogConfig GetLoadBalancerAttributeResult::getAccessLogConfig()const
{
	return accessLogConfig_;
}

bool GetLoadBalancerAttributeResult::getConfigManagedEnabled()const
{
	return configManagedEnabled_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerBussinessStatus()const
{
	return loadBalancerBussinessStatus_;
}

std::string GetLoadBalancerAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string GetLoadBalancerAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string GetLoadBalancerAttributeResult::getAddressAllocatedMode()const
{
	return addressAllocatedMode_;
}

std::string GetLoadBalancerAttributeResult::getAddressType()const
{
	return addressType_;
}

std::string GetLoadBalancerAttributeResult::getLoadBalancerStatus()const
{
	return loadBalancerStatus_;
}

std::vector<GetLoadBalancerAttributeResult::LoadBalancerOperationLock> GetLoadBalancerAttributeResult::getLoadBalancerOperationLocks()const
{
	return loadBalancerOperationLocks_;
}

