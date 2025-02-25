﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
   * Kafka (Amazon MSK) event source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AmazonManagedKafkaEventSourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API AmazonManagedKafkaEventSourceConfig
  {
  public:
    AmazonManagedKafkaEventSourceConfig();
    AmazonManagedKafkaEventSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AmazonManagedKafkaEventSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline const Aws::String& GetConsumerGroupId() const{ return m_consumerGroupId; }

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline bool ConsumerGroupIdHasBeenSet() const { return m_consumerGroupIdHasBeenSet; }

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline void SetConsumerGroupId(const Aws::String& value) { m_consumerGroupIdHasBeenSet = true; m_consumerGroupId = value; }

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline void SetConsumerGroupId(Aws::String&& value) { m_consumerGroupIdHasBeenSet = true; m_consumerGroupId = std::move(value); }

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline void SetConsumerGroupId(const char* value) { m_consumerGroupIdHasBeenSet = true; m_consumerGroupId.assign(value); }

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline AmazonManagedKafkaEventSourceConfig& WithConsumerGroupId(const Aws::String& value) { SetConsumerGroupId(value); return *this;}

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline AmazonManagedKafkaEventSourceConfig& WithConsumerGroupId(Aws::String&& value) { SetConsumerGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Kafka consumer group to join. The consumer group ID
     * must be unique among all your Kafka event sources. After creating a Kafka event
     * source mapping with the consumer group ID specified, you cannot update this
     * value. For more information, see <a>services-msk-consumer-group-id</a>.</p>
     */
    inline AmazonManagedKafkaEventSourceConfig& WithConsumerGroupId(const char* value) { SetConsumerGroupId(value); return *this;}

  private:

    Aws::String m_consumerGroupId;
    bool m_consumerGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
