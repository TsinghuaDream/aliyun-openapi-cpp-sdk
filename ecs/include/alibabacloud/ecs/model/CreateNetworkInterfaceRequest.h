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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateNetworkInterfaceRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateNetworkInterfaceRequest();
	~CreateNetworkInterfaceRequest();
	int getQueueNumber() const;
	void setQueueNumber(int queueNumber);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getSecondaryPrivateIpAddressCount() const;
	void setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	bool getVisible() const;
	void setVisible(bool visible);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getQueuePairNumber() const;
	void setQueuePairNumber(int queuePairNumber);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::string getNetworkInterfaceTrafficMode() const;
	void setNetworkInterfaceTrafficMode(const std::string &networkInterfaceTrafficMode);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::vector<std::string> getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::vector<std::string> &privateIpAddress);
	std::string getPrimaryIpAddress() const;
	void setPrimaryIpAddress(const std::string &primaryIpAddress);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);

private:
	int queueNumber_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string securityGroupId_;
	std::string description_;
	int secondaryPrivateIpAddressCount_;
	std::string businessType_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string instanceType_;
	std::vector<Tag> tag_;
	std::string networkInterfaceName_;
	bool visible_;
	std::string resourceOwnerAccount_;
	int ipv6AddressCount_;
	std::string ownerAccount_;
	int queuePairNumber_;
	long ownerId_;
	std::vector<std::string> securityGroupIds_;
	std::string networkInterfaceTrafficMode_;
	std::string vSwitchId_;
	std::vector<std::string> privateIpAddress_;
	std::string primaryIpAddress_;
	std::vector<std::string> ipv6Address_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_
