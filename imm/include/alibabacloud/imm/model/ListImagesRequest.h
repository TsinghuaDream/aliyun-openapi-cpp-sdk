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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTIMAGESREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_LISTIMAGESREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT ListImagesRequest : public RpcServiceRequest {
public:
	ListImagesRequest();
	~ListImagesRequest();
	std::string getProject() const;
	void setProject(const std::string &project);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getLimit() const;
	void setLimit(int limit);
	std::string getMarker() const;
	void setMarker(const std::string &marker);
	std::string getSetId() const;
	void setSetId(const std::string &setId);
	std::string getCreateTimeStart() const;
	void setCreateTimeStart(const std::string &createTimeStart);

private:
	std::string project_;
	std::string accessKeyId_;
	int limit_;
	std::string marker_;
	std::string setId_;
	std::string createTimeStart_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_LISTIMAGESREQUEST_H_
