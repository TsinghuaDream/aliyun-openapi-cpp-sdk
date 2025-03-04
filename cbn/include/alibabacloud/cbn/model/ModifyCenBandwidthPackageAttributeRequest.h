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

#ifndef ALIBABACLOUD_CBN_MODEL_MODIFYCENBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_MODIFYCENBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT ModifyCenBandwidthPackageAttributeRequest : public RpcServiceRequest {
public:
	ModifyCenBandwidthPackageAttributeRequest();
	~ModifyCenBandwidthPackageAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCenBandwidthPackageId() const;
	void setCenBandwidthPackageId(const std::string &cenBandwidthPackageId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string description_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string cenBandwidthPackageId_;
	std::string name_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_MODIFYCENBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
