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

#ifndef ALIBABACLOUD_CBN_MODEL_UPDATECENINTERREGIONTRAFFICQOSPOLICYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_UPDATECENINTERREGIONTRAFFICQOSPOLICYATTRIBUTEREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT UpdateCenInterRegionTrafficQosPolicyAttributeRequest : public RpcServiceRequest {
public:
	UpdateCenInterRegionTrafficQosPolicyAttributeRequest();
	~UpdateCenInterRegionTrafficQosPolicyAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTrafficQosPolicyName() const;
	void setTrafficQosPolicyName(const std::string &trafficQosPolicyName);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getTrafficQosPolicyId() const;
	void setTrafficQosPolicyId(const std::string &trafficQosPolicyId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTrafficQosPolicyDescription() const;
	void setTrafficQosPolicyDescription(const std::string &trafficQosPolicyDescription);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string trafficQosPolicyName_;
	bool dryRun_;
	std::string trafficQosPolicyId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string trafficQosPolicyDescription_;
	long ownerId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_UPDATECENINTERREGIONTRAFFICQOSPOLICYATTRIBUTEREQUEST_H_
