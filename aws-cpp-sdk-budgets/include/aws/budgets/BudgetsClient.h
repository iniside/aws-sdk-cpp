﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/budgets/model/CreateBudgetResult.h>
#include <aws/budgets/model/CreateBudgetActionResult.h>
#include <aws/budgets/model/CreateNotificationResult.h>
#include <aws/budgets/model/CreateSubscriberResult.h>
#include <aws/budgets/model/DeleteBudgetResult.h>
#include <aws/budgets/model/DeleteBudgetActionResult.h>
#include <aws/budgets/model/DeleteNotificationResult.h>
#include <aws/budgets/model/DeleteSubscriberResult.h>
#include <aws/budgets/model/DescribeBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetActionResult.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryResult.h>
#include <aws/budgets/model/DescribeBudgetsResult.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationResult.h>
#include <aws/budgets/model/ExecuteBudgetActionResult.h>
#include <aws/budgets/model/UpdateBudgetResult.h>
#include <aws/budgets/model/UpdateBudgetActionResult.h>
#include <aws/budgets/model/UpdateNotificationResult.h>
#include <aws/budgets/model/UpdateSubscriberResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Budgets
{

namespace Model
{
        class CreateBudgetRequest;
        class CreateBudgetActionRequest;
        class CreateNotificationRequest;
        class CreateSubscriberRequest;
        class DeleteBudgetRequest;
        class DeleteBudgetActionRequest;
        class DeleteNotificationRequest;
        class DeleteSubscriberRequest;
        class DescribeBudgetRequest;
        class DescribeBudgetActionRequest;
        class DescribeBudgetActionHistoriesRequest;
        class DescribeBudgetActionsForAccountRequest;
        class DescribeBudgetActionsForBudgetRequest;
        class DescribeBudgetNotificationsForAccountRequest;
        class DescribeBudgetPerformanceHistoryRequest;
        class DescribeBudgetsRequest;
        class DescribeNotificationsForBudgetRequest;
        class DescribeSubscribersForNotificationRequest;
        class ExecuteBudgetActionRequest;
        class UpdateBudgetRequest;
        class UpdateBudgetActionRequest;
        class UpdateNotificationRequest;
        class UpdateSubscriberRequest;

        typedef Aws::Utils::Outcome<CreateBudgetResult, BudgetsError> CreateBudgetOutcome;
        typedef Aws::Utils::Outcome<CreateBudgetActionResult, BudgetsError> CreateBudgetActionOutcome;
        typedef Aws::Utils::Outcome<CreateNotificationResult, BudgetsError> CreateNotificationOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriberResult, BudgetsError> CreateSubscriberOutcome;
        typedef Aws::Utils::Outcome<DeleteBudgetResult, BudgetsError> DeleteBudgetOutcome;
        typedef Aws::Utils::Outcome<DeleteBudgetActionResult, BudgetsError> DeleteBudgetActionOutcome;
        typedef Aws::Utils::Outcome<DeleteNotificationResult, BudgetsError> DeleteNotificationOutcome;
        typedef Aws::Utils::Outcome<DeleteSubscriberResult, BudgetsError> DeleteSubscriberOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetResult, BudgetsError> DescribeBudgetOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetActionResult, BudgetsError> DescribeBudgetActionOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetActionHistoriesResult, BudgetsError> DescribeBudgetActionHistoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetActionsForAccountResult, BudgetsError> DescribeBudgetActionsForAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetActionsForBudgetResult, BudgetsError> DescribeBudgetActionsForBudgetOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetNotificationsForAccountResult, BudgetsError> DescribeBudgetNotificationsForAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetPerformanceHistoryResult, BudgetsError> DescribeBudgetPerformanceHistoryOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetsResult, BudgetsError> DescribeBudgetsOutcome;
        typedef Aws::Utils::Outcome<DescribeNotificationsForBudgetResult, BudgetsError> DescribeNotificationsForBudgetOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscribersForNotificationResult, BudgetsError> DescribeSubscribersForNotificationOutcome;
        typedef Aws::Utils::Outcome<ExecuteBudgetActionResult, BudgetsError> ExecuteBudgetActionOutcome;
        typedef Aws::Utils::Outcome<UpdateBudgetResult, BudgetsError> UpdateBudgetOutcome;
        typedef Aws::Utils::Outcome<UpdateBudgetActionResult, BudgetsError> UpdateBudgetActionOutcome;
        typedef Aws::Utils::Outcome<UpdateNotificationResult, BudgetsError> UpdateNotificationOutcome;
        typedef Aws::Utils::Outcome<UpdateSubscriberResult, BudgetsError> UpdateSubscriberOutcome;

        typedef std::future<CreateBudgetOutcome> CreateBudgetOutcomeCallable;
        typedef std::future<CreateBudgetActionOutcome> CreateBudgetActionOutcomeCallable;
        typedef std::future<CreateNotificationOutcome> CreateNotificationOutcomeCallable;
        typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
        typedef std::future<DeleteBudgetOutcome> DeleteBudgetOutcomeCallable;
        typedef std::future<DeleteBudgetActionOutcome> DeleteBudgetActionOutcomeCallable;
        typedef std::future<DeleteNotificationOutcome> DeleteNotificationOutcomeCallable;
        typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
        typedef std::future<DescribeBudgetOutcome> DescribeBudgetOutcomeCallable;
        typedef std::future<DescribeBudgetActionOutcome> DescribeBudgetActionOutcomeCallable;
        typedef std::future<DescribeBudgetActionHistoriesOutcome> DescribeBudgetActionHistoriesOutcomeCallable;
        typedef std::future<DescribeBudgetActionsForAccountOutcome> DescribeBudgetActionsForAccountOutcomeCallable;
        typedef std::future<DescribeBudgetActionsForBudgetOutcome> DescribeBudgetActionsForBudgetOutcomeCallable;
        typedef std::future<DescribeBudgetNotificationsForAccountOutcome> DescribeBudgetNotificationsForAccountOutcomeCallable;
        typedef std::future<DescribeBudgetPerformanceHistoryOutcome> DescribeBudgetPerformanceHistoryOutcomeCallable;
        typedef std::future<DescribeBudgetsOutcome> DescribeBudgetsOutcomeCallable;
        typedef std::future<DescribeNotificationsForBudgetOutcome> DescribeNotificationsForBudgetOutcomeCallable;
        typedef std::future<DescribeSubscribersForNotificationOutcome> DescribeSubscribersForNotificationOutcomeCallable;
        typedef std::future<ExecuteBudgetActionOutcome> ExecuteBudgetActionOutcomeCallable;
        typedef std::future<UpdateBudgetOutcome> UpdateBudgetOutcomeCallable;
        typedef std::future<UpdateBudgetActionOutcome> UpdateBudgetActionOutcomeCallable;
        typedef std::future<UpdateNotificationOutcome> UpdateNotificationOutcomeCallable;
        typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
} // namespace Model

  class BudgetsClient;

    typedef std::function<void(const BudgetsClient*, const Model::CreateBudgetRequest&, const Model::CreateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateBudgetActionRequest&, const Model::CreateBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateNotificationRequest&, const Model::CreateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteBudgetRequest&, const Model::DeleteBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteBudgetActionRequest&, const Model::DeleteBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteNotificationRequest&, const Model::DeleteNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetRequest&, const Model::DescribeBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionRequest&, const Model::DescribeBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionHistoriesRequest&, const Model::DescribeBudgetActionHistoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionHistoriesResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionsForAccountRequest&, const Model::DescribeBudgetActionsForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionsForAccountResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionsForBudgetRequest&, const Model::DescribeBudgetActionsForBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionsForBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetNotificationsForAccountRequest&, const Model::DescribeBudgetNotificationsForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetNotificationsForAccountResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetPerformanceHistoryRequest&, const Model::DescribeBudgetPerformanceHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetPerformanceHistoryResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetsRequest&, const Model::DescribeBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetsResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeNotificationsForBudgetRequest&, const Model::DescribeNotificationsForBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationsForBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeSubscribersForNotificationRequest&, const Model::DescribeSubscribersForNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribersForNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::ExecuteBudgetActionRequest&, const Model::ExecuteBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateBudgetRequest&, const Model::UpdateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateBudgetActionRequest&, const Model::UpdateBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateNotificationRequest&, const Model::UpdateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberResponseReceivedHandler;

  /**
   * <p>Use the Amazon Web Services Budgets API to plan your service usage, service
   * costs, and instance reservations. This API reference provides descriptions,
   * syntax, and usage examples for each of the actions and data types for the Amazon
   * Web Services Budgets feature. </p> <p>Budgets provide you with a way to see the
   * following information:</p> <ul> <li> <p>How close your plan is to your budgeted
   * amount or to the free tier limits</p> </li> <li> <p>Your usage-to-date,
   * including how much you've used of your Reserved Instances (RIs)</p> </li> <li>
   * <p>Your current estimated charges from Amazon Web Services, and how much your
   * predicted usage will accrue in charges by the end of the month</p> </li> <li>
   * <p>How much of your budget has been used</p> </li> </ul> <p>Amazon Web Services
   * updates your budget status several times a day. Budgets track your unblended
   * costs, subscriptions, refunds, and RIs. You can create the following types of
   * budgets:</p> <ul> <li> <p> <b>Cost budgets</b> - Plan how much you want to spend
   * on a service.</p> </li> <li> <p> <b>Usage budgets</b> - Plan how much you want
   * to use one or more services.</p> </li> <li> <p> <b>RI utilization budgets</b> -
   * Define a utilization threshold, and receive alerts when your RI usage falls
   * below that threshold. This lets you see if your RIs are unused or
   * under-utilized.</p> </li> <li> <p> <b>RI coverage budgets</b> - Define a
   * coverage threshold, and receive alerts when the number of your instance hours
   * that are covered by RIs fall below that threshold. This lets you see how much of
   * your instance usage is covered by a reservation.</p> </li> </ul> <p>Service
   * Endpoint</p> <p>The Amazon Web Services Budgets API provides the following
   * endpoint:</p> <ul> <li> <p>https://budgets.amazonaws.com</p> </li> </ul> <p>For
   * information about costs that are associated with the Amazon Web Services Budgets
   * API, see <a href="https://aws.amazon.com/aws-cost-management/pricing/">Amazon
   * Web Services Cost Management Pricing</a>.</p>
   */
  class AWS_BUDGETS_API BudgetsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BudgetsClient();


        /**
         * <p>Creates a budget and, if included, notifications and subscribers. </p>
         *  <p>Only one of <code>BudgetLimit</code> or
         * <code>PlannedBudgetLimits</code> can be present in the syntax at one time. Use
         * the syntax that matches your case. The Request Syntax section shows the
         * <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the
         * <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_CreateBudget.html#API_CreateBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest& request) const;

        /**
         * A Callable wrapper for CreateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBudgetOutcomeCallable CreateBudgetCallable(const Model::CreateBudgetRequest& request) const;

        /**
         * An Async wrapper for CreateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBudgetAsync(const Model::CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetActionOutcome CreateBudgetAction(const Model::CreateBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for CreateBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBudgetActionOutcomeCallable CreateBudgetActionCallable(const Model::CreateBudgetActionRequest& request) const;

        /**
         * An Async wrapper for CreateBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBudgetActionAsync(const Model::CreateBudgetActionRequest& request, const CreateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationOutcome CreateNotification(const Model::CreateNotificationRequest& request) const;

        /**
         * A Callable wrapper for CreateNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationOutcomeCallable CreateNotificationCallable(const Model::CreateNotificationRequest& request) const;

        /**
         * An Async wrapper for CreateNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotificationAsync(const Model::CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const Model::CreateSubscriberRequest& request) const;

        /**
         * An Async wrapper for CreateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriberAsync(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> 
         * <p>Deleting a budget also deletes the notifications and subscribers that are
         * associated with that budget.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;

        /**
         * A Callable wrapper for DeleteBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBudgetOutcomeCallable DeleteBudgetCallable(const Model::DeleteBudgetRequest& request) const;

        /**
         * An Async wrapper for DeleteBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBudgetAsync(const Model::DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetActionOutcome DeleteBudgetAction(const Model::DeleteBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBudgetActionOutcomeCallable DeleteBudgetActionCallable(const Model::DeleteBudgetActionRequest& request) const;

        /**
         * An Async wrapper for DeleteBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBudgetActionAsync(const Model::DeleteBudgetActionRequest& request, const DeleteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notification.</p>  <p>Deleting a notification also
         * deletes the subscribers that are associated with the notification.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationOutcome DeleteNotification(const Model::DeleteNotificationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationOutcomeCallable DeleteNotificationCallable(const Model::DeleteNotificationRequest& request) const;

        /**
         * An Async wrapper for DeleteNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationAsync(const Model::DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subscriber.</p>  <p>Deleting the last subscriber to a
         * notification also deletes the notification.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const Model::DeleteSubscriberRequest& request) const;

        /**
         * An Async wrapper for DeleteSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriberAsync(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a budget.</p>  <p>The Request Syntax section shows the
         * <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the
         * <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudget.html#API_DescribeBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetOutcome DescribeBudget(const Model::DescribeBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetOutcomeCallable DescribeBudgetCallable(const Model::DescribeBudgetRequest& request) const;

        /**
         * An Async wrapper for DescribeBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetAsync(const Model::DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes a budget action detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionOutcome DescribeBudgetAction(const Model::DescribeBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetActionOutcomeCallable DescribeBudgetActionCallable(const Model::DescribeBudgetActionRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetActionAsync(const Model::DescribeBudgetActionRequest& request, const DescribeBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes a budget action history detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionHistories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionHistoriesOutcome DescribeBudgetActionHistories(const Model::DescribeBudgetActionHistoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionHistories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetActionHistoriesOutcomeCallable DescribeBudgetActionHistoriesCallable(const Model::DescribeBudgetActionHistoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetActionHistories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetActionHistoriesAsync(const Model::DescribeBudgetActionHistoriesRequest& request, const DescribeBudgetActionHistoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes all of the budget actions for an account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForAccountOutcome DescribeBudgetActionsForAccount(const Model::DescribeBudgetActionsForAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionsForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetActionsForAccountOutcomeCallable DescribeBudgetActionsForAccountCallable(const Model::DescribeBudgetActionsForAccountRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetActionsForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetActionsForAccountAsync(const Model::DescribeBudgetActionsForAccountRequest& request, const DescribeBudgetActionsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes all of the budget actions for a budget. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForBudgetOutcome DescribeBudgetActionsForBudget(const Model::DescribeBudgetActionsForBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionsForBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetActionsForBudgetOutcomeCallable DescribeBudgetActionsForBudgetCallable(const Model::DescribeBudgetActionsForBudgetRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetActionsForBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetActionsForBudgetAsync(const Model::DescribeBudgetActionsForBudgetRequest& request, const DescribeBudgetActionsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the budget names and notifications that are associated with an
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetNotificationsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetNotificationsForAccountOutcome DescribeBudgetNotificationsForAccount(const Model::DescribeBudgetNotificationsForAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetNotificationsForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetNotificationsForAccountOutcomeCallable DescribeBudgetNotificationsForAccountCallable(const Model::DescribeBudgetNotificationsForAccountRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetNotificationsForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetNotificationsForAccountAsync(const Model::DescribeBudgetNotificationsForAccountRequest& request, const DescribeBudgetNotificationsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the history for <code>DAILY</code>, <code>MONTHLY</code>, and
         * <code>QUARTERLY</code> budgets. Budget history isn't available for
         * <code>ANNUAL</code> budgets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetPerformanceHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetPerformanceHistoryOutcome DescribeBudgetPerformanceHistory(const Model::DescribeBudgetPerformanceHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetPerformanceHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetPerformanceHistoryOutcomeCallable DescribeBudgetPerformanceHistoryCallable(const Model::DescribeBudgetPerformanceHistoryRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgetPerformanceHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetPerformanceHistoryAsync(const Model::DescribeBudgetPerformanceHistoryRequest& request, const DescribeBudgetPerformanceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the budgets that are associated with an account.</p>  <p>The
         * Request Syntax section shows the <code>BudgetLimit</code> syntax. For
         * <code>PlannedBudgetLimits</code>, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudgets.html#API_DescribeBudgets_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetsOutcome DescribeBudgets(const Model::DescribeBudgetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetsOutcomeCallable DescribeBudgetsCallable(const Model::DescribeBudgetsRequest& request) const;

        /**
         * An Async wrapper for DescribeBudgets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetsAsync(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the notifications that are associated with a budget.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationsForBudgetOutcome DescribeNotificationsForBudget(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationsForBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationsForBudgetOutcomeCallable DescribeNotificationsForBudgetCallable(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * An Async wrapper for DescribeNotificationsForBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationsForBudgetAsync(const Model::DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the subscribers that are associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribersForNotificationOutcome DescribeSubscribersForNotification(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscribersForNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscribersForNotificationOutcomeCallable DescribeSubscribersForNotificationCallable(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * An Async wrapper for DescribeSubscribersForNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscribersForNotificationAsync(const Model::DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Executes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ExecuteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteBudgetActionOutcome ExecuteBudgetAction(const Model::ExecuteBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for ExecuteBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteBudgetActionOutcomeCallable ExecuteBudgetActionCallable(const Model::ExecuteBudgetActionRequest& request) const;

        /**
         * An Async wrapper for ExecuteBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteBudgetActionAsync(const Model::ExecuteBudgetActionRequest& request, const ExecuteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a budget. You can change every part of a budget except for the
         * <code>budgetName</code> and the <code>calculatedSpend</code>. When you modify a
         * budget, the <code>calculatedSpend</code> drops to zero until Amazon Web Services
         * has new usage data to use for forecasting.</p>  <p>Only one of
         * <code>BudgetLimit</code> or <code>PlannedBudgetLimits</code> can be present in
         * the syntax at one time. Use the syntax that matches your case. The Request
         * Syntax section shows the <code>BudgetLimit</code> syntax. For
         * <code>PlannedBudgetLimits</code>, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_UpdateBudget.html#API_UpdateBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetOutcome UpdateBudget(const Model::UpdateBudgetRequest& request) const;

        /**
         * A Callable wrapper for UpdateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBudgetOutcomeCallable UpdateBudgetCallable(const Model::UpdateBudgetRequest& request) const;

        /**
         * An Async wrapper for UpdateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBudgetAsync(const Model::UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetActionOutcome UpdateBudgetAction(const Model::UpdateBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBudgetActionOutcomeCallable UpdateBudgetActionCallable(const Model::UpdateBudgetActionRequest& request) const;

        /**
         * An Async wrapper for UpdateBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBudgetActionAsync(const Model::UpdateBudgetActionRequest& request, const UpdateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationOutcome UpdateNotification(const Model::UpdateNotificationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotificationOutcomeCallable UpdateNotificationCallable(const Model::UpdateNotificationRequest& request) const;

        /**
         * An Async wrapper for UpdateNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationAsync(const Model::UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const Model::UpdateSubscriberRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriberAsync(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBudgetAsyncHelper(const Model::CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBudgetActionAsyncHelper(const Model::CreateBudgetActionRequest& request, const CreateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotificationAsyncHelper(const Model::CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriberAsyncHelper(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBudgetAsyncHelper(const Model::DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBudgetActionAsyncHelper(const Model::DeleteBudgetActionRequest& request, const DeleteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationAsyncHelper(const Model::DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriberAsyncHelper(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetAsyncHelper(const Model::DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetActionAsyncHelper(const Model::DescribeBudgetActionRequest& request, const DescribeBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetActionHistoriesAsyncHelper(const Model::DescribeBudgetActionHistoriesRequest& request, const DescribeBudgetActionHistoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetActionsForAccountAsyncHelper(const Model::DescribeBudgetActionsForAccountRequest& request, const DescribeBudgetActionsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetActionsForBudgetAsyncHelper(const Model::DescribeBudgetActionsForBudgetRequest& request, const DescribeBudgetActionsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetNotificationsForAccountAsyncHelper(const Model::DescribeBudgetNotificationsForAccountRequest& request, const DescribeBudgetNotificationsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetPerformanceHistoryAsyncHelper(const Model::DescribeBudgetPerformanceHistoryRequest& request, const DescribeBudgetPerformanceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetsAsyncHelper(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationsForBudgetAsyncHelper(const Model::DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscribersForNotificationAsyncHelper(const Model::DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteBudgetActionAsyncHelper(const Model::ExecuteBudgetActionRequest& request, const ExecuteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBudgetAsyncHelper(const Model::UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBudgetActionAsyncHelper(const Model::UpdateBudgetActionRequest& request, const UpdateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotificationAsyncHelper(const Model::UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubscriberAsyncHelper(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Budgets
} // namespace Aws
