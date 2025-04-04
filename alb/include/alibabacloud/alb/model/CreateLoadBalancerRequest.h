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

#ifndef ALIBABACLOUD_ALB_MODEL_CREATELOADBALANCERREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_CREATELOADBALANCERREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT CreateLoadBalancerRequest : public RpcServiceRequest {
public:
	struct ModificationProtectionConfig {
		std::string reason;
		std::string status;
	};
	struct LoadBalancerBillingConfig {
		std::string bandwidthPackageId;
		std::string internetChargeType;
		int internetBandwidth;
		std::string payType;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct ZoneMappings {
		std::string vSwitchId;
		std::string eipType;
		std::string zoneId;
		std::string allocationId;
		std::string intranetAddress;
	};
	CreateLoadBalancerRequest();
	~CreateLoadBalancerRequest();
	std::string getLoadBalancerEdition() const;
	void setLoadBalancerEdition(const std::string &loadBalancerEdition);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	ModificationProtectionConfig getModificationProtectionConfig() const;
	void setModificationProtectionConfig(const ModificationProtectionConfig &modificationProtectionConfig);
	LoadBalancerBillingConfig getLoadBalancerBillingConfig() const;
	void setLoadBalancerBillingConfig(const LoadBalancerBillingConfig &loadBalancerBillingConfig);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	bool getDeletionProtectionEnabled() const;
	void setDeletionProtectionEnabled(bool deletionProtectionEnabled);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLoadBalancerName() const;
	void setLoadBalancerName(const std::string &loadBalancerName);
	std::string getAddressType() const;
	void setAddressType(const std::string &addressType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getAddressAllocatedMode() const;
	void setAddressAllocatedMode(const std::string &addressAllocatedMode);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::vector<ZoneMappings> getZoneMappings() const;
	void setZoneMappings(const std::vector<ZoneMappings> &zoneMappings);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string loadBalancerEdition_;
	std::string clientToken_;
	ModificationProtectionConfig modificationProtectionConfig_;
	LoadBalancerBillingConfig loadBalancerBillingConfig_;
	std::string addressIpVersion_;
	bool deletionProtectionEnabled_;
	std::string resourceGroupId_;
	std::string loadBalancerName_;
	std::string addressType_;
	std::vector<Tag> tag_;
	std::string addressAllocatedMode_;
	bool dryRun_;
	std::vector<ZoneMappings> zoneMappings_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_CREATELOADBALANCERREQUEST_H_
