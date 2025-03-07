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

#ifndef ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AllocateDedicatedHostsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	AllocateDedicatedHostsRequest();
	~AllocateDedicatedHostsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	float getCpuOverCommitRatio() const;
	void setCpuOverCommitRatio(float cpuOverCommitRatio);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getMinQuantity() const;
	void setMinQuantity(int minQuantity);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getActionOnMaintenance() const;
	void setActionOnMaintenance(const std::string &actionOnMaintenance);
	std::string getDedicatedHostClusterId() const;
	void setDedicatedHostClusterId(const std::string &dedicatedHostClusterId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getDedicatedHostType() const;
	void setDedicatedHostType(const std::string &dedicatedHostType);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	int getQuantity() const;
	void setQuantity(int quantity);
	std::string getDedicatedHostName() const;
	void setDedicatedHostName(const std::string &dedicatedHostName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAutoReleaseTime() const;
	void setAutoReleaseTime(const std::string &autoReleaseTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	int getNetworkAttributesSlbUdpTimeout() const;
	void setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getAutoPlacement() const;
	void setAutoPlacement(const std::string &autoPlacement);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	int getNetworkAttributesUdpTimeout() const;
	void setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string description_;
	float cpuOverCommitRatio_;
	std::string resourceGroupId_;
	int minQuantity_;
	std::string regionId_;
	std::string actionOnMaintenance_;
	std::string dedicatedHostClusterId_;
	std::vector<Tag> tag_;
	std::string dedicatedHostType_;
	int autoRenewPeriod_;
	int period_;
	int quantity_;
	std::string dedicatedHostName_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string autoReleaseTime_;
	long ownerId_;
	std::string periodUnit_;
	bool autoRenew_;
	int networkAttributesSlbUdpTimeout_;
	std::string zoneId_;
	std::string autoPlacement_;
	std::string chargeType_;
	int networkAttributesUdpTimeout_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_ALLOCATEDEDICATEDHOSTSREQUEST_H_
