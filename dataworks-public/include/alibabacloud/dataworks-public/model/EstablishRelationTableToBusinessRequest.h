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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ESTABLISHRELATIONTABLETOBUSINESSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ESTABLISHRELATIONTABLETOBUSINESSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT EstablishRelationTableToBusinessRequest : public RpcServiceRequest {
public:
	EstablishRelationTableToBusinessRequest();
	~EstablishRelationTableToBusinessRequest();
	std::string getBusinessId() const;
	void setBusinessId(const std::string &businessId);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	std::string getFolderId() const;
	void setFolderId(const std::string &folderId);
	std::string getTableGuid() const;
	void setTableGuid(const std::string &tableGuid);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string businessId_;
	std::string projectIdentifier_;
	std::string folderId_;
	std::string tableGuid_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_ESTABLISHRELATIONTABLETOBUSINESSREQUEST_H_
