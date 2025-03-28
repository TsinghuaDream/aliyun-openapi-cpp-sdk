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

#ifndef ALIBABACLOUD_ALB_MODEL_CREATEACLREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_CREATEACLREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT CreateAclRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateAclRequest();
	~CreateAclRequest();
	std::string getAclName() const;
	void setAclName(const std::string &aclName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAddressIpVersion() const;
	void setAddressIpVersion(const std::string &addressIpVersion);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);

private:
	std::string aclName_;
	std::string clientToken_;
	std::string addressIpVersion_;
	std::string resourceGroupId_;
	std::vector<Tag> tag_;
	bool dryRun_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_CREATEACLREQUEST_H_
