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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListIntervalAgentReportResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Inbound
					{
						long totalWorkTime;
						long callsRinged;
						long totalHoldTime;
						float averageHoldTime;
						long callsOffered;
						long maxRingTime;
						long callsHold;
						float satisfactionIndex;
						long totalRingTime;
						float handleRate;
						long totalTalkTime;
						long maxTalkTime;
						float satisfactionRate;
						long callsAttendedTransferOut;
						float averageTalkTime;
						long maxHoldTime;
						long satisfactionSurveysOffered;
						long callsHandled;
						long satisfactionSurveysResponded;
						long callsAttendedTransferIn;
						float averageRingTime;
						float averageWorkTime;
						long callsBlindTransferOut;
						long callsBlindTransferIn;
						long maxWorkTime;
					};
					struct Outbound
					{
						long totalDialingTime;
						long totalWorkTime;
						long callsRinged;
						long totalHoldTime;
						float averageHoldTime;
						long maxRingTime;
						long callsHold;
						float satisfactionIndex;
						long totalRingTime;
						float averageDialingTime;
						long callsAnswered;
						long callsDialed;
						long totalTalkTime;
						long maxDialingTime;
						long maxTalkTime;
						float satisfactionRate;
						long callsAttendedTransferOut;
						float answerRate;
						float averageTalkTime;
						long maxHoldTime;
						long satisfactionSurveysOffered;
						long satisfactionSurveysResponded;
						long callsAttendedTransferIn;
						float averageRingTime;
						float averageWorkTime;
						long callsBlindTransferOut;
						long callsBlindTransferIn;
						long maxWorkTime;
					};
					struct Overall
					{
						long totalReadyTime;
						long lastCheckoutTime;
						long totalBreakTime;
						long totalCalls;
						long totalWorkTime;
						long totalHoldTime;
						float averageHoldTime;
						long satisfactionSurveysOffered;
						float satisfactionIndex;
						float averageBreakTime;
						long firstCheckInTime;
						long satisfactionSurveysResponded;
						long totalTalkTime;
						float averageReadyTime;
						long totalLoggedInTime;
						long maxTalkTime;
						float averageWorkTime;
						long maxReadyTime;
						float satisfactionRate;
						long maxBreakTime;
						long maxWorkTime;
						float averageTalkTime;
						long maxHoldTime;
						float occupancyRate;
					};
					Outbound outbound;
					Overall overall;
					Inbound inbound;
					long statsTime;
				};


				ListIntervalAgentReportResult();
				explicit ListIntervalAgentReportResult(const std::string &payload);
				~ListIntervalAgentReportResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<DataItem> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTRESULT_H_