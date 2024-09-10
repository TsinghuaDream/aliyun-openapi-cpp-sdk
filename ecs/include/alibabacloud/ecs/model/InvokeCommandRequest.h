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

#ifndef ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT InvokeCommandRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct ResourceTag {
		std::string key;
		std::string value;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	InvokeCommandRequest();
	~InvokeCommandRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getContainerName() const;
	void setContainerName(const std::string &containerName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getFrequency() const;
	void setFrequency(const std::string &frequency);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRepeatMode() const;
	void setRepeatMode(const std::string &repeatMode);
	std::string getWindowsPasswordName() const;
	void setWindowsPasswordName(const std::string &windowsPasswordName);
	std::vector<ResourceTag> getResourceTag() const;
	void setResourceTag(const std::vector<ResourceTag> &resourceTag);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getTimed() const;
	void setTimed(bool timed);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTerminationMode() const;
	void setTerminationMode(const std::string &terminationMode);
	std::vector<std::string> getInstanceId() const;
	void setInstanceId(const std::vector<std::string> &instanceId);
	std::string getContainerId() const;
	void setContainerId(const std::string &containerId);
	std::map<std::string, std::string> getParameters() const;
	void setParameters(std::map<std::string, std::string> parameters);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getLauncher() const;
	void setLauncher(const std::string &launcher);

private:
	long resourceOwnerId_;
	std::string containerName_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::string commandId_;
	long timeout_;
	std::string frequency_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string repeatMode_;
	std::string windowsPasswordName_;
	std::vector<ResourceTag> resourceTag_;
	std::vector<Tag> tag_;
	bool timed_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string terminationMode_;
	std::vector<std::string> instanceId_;
	std::string containerId_;
	std::map<std::string, std::string> parameters_;
	std::string username_;
	std::string launcher_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_INVOKECOMMANDREQUEST_H_
