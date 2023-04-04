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

#ifndef ALIBABACLOUD_IMM_MODEL_QUERYSIMILARIMAGECLUSTERSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_QUERYSIMILARIMAGECLUSTERSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT QuerySimilarImageClustersRequest : public RpcServiceRequest {
public:
	QuerySimilarImageClustersRequest();
	~QuerySimilarImageClustersRequest();
	std::string getCustomLabels() const;
	void setCustomLabels(const std::string &customLabels);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getSort() const;
	void setSort(const std::string &sort);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string customLabels_;
	std::string nextToken_;
	std::string datasetName_;
	std::string order_;
	std::string projectName_;
	std::string sort_;
	int maxResults_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_QUERYSIMILARIMAGECLUSTERSREQUEST_H_
