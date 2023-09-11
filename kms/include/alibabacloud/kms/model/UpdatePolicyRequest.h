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

#ifndef ALIBABACLOUD_KMS_MODEL_UPDATEPOLICYREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_UPDATEPOLICYREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT UpdatePolicyRequest : public RpcServiceRequest {
public:
	UpdatePolicyRequest();
	~UpdatePolicyRequest();
	std::string getAccessControlRules() const;
	void setAccessControlRules(const std::string &accessControlRules);
	std::string getResources() const;
	void setResources(const std::string &resources);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPermissions() const;
	void setPermissions(const std::string &permissions);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string accessControlRules_;
	std::string resources_;
	std::string description_;
	std::string permissions_;
	std::string name_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_UPDATEPOLICYREQUEST_H_
