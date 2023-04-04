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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATECUSTOMIZEDSTORYREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATECUSTOMIZEDSTORYREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateCustomizedStoryRequest : public RpcServiceRequest {
public:
	struct Cover {
		std::string uRI;
	};
	struct Files {
		std::string uRI;
	};
	CreateCustomizedStoryRequest();
	~CreateCustomizedStoryRequest();
	std::map<std::string, std::string> getCustomLabels() const;
	void setCustomLabels(const std::map<std::string, std::string> &customLabels);
	Cover getCover() const;
	void setCover(const Cover &cover);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getStoryType() const;
	void setStoryType(const std::string &storyType);
	std::string getStorySubType() const;
	void setStorySubType(const std::string &storySubType);
	std::vector<Files> getFiles() const;
	void setFiles(const std::vector<Files> &files);
	std::string getStoryName() const;
	void setStoryName(const std::string &storyName);

private:
	std::map<std::string, std::string> customLabels_;
	Cover cover_;
	std::string datasetName_;
	std::string projectName_;
	std::string storyType_;
	std::string storySubType_;
	std::vector<Files> files_;
	std::string storyName_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATECUSTOMIZEDSTORYREQUEST_H_
