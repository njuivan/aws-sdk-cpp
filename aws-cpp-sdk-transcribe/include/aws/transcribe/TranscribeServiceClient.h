﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/model/CreateVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyFilterResult.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/GetVocabularyFilterResult.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/transcribe/model/ListVocabularyFiltersResult.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/StartTranscriptionJobResult.h>
#include <aws/transcribe/model/UpdateVocabularyResult.h>
#include <aws/transcribe/model/UpdateVocabularyFilterResult.h>
#include <aws/core/NoResult.h>
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

namespace TranscribeService
{

namespace Model
{
        class CreateVocabularyRequest;
        class CreateVocabularyFilterRequest;
        class DeleteMedicalTranscriptionJobRequest;
        class DeleteTranscriptionJobRequest;
        class DeleteVocabularyRequest;
        class DeleteVocabularyFilterRequest;
        class GetMedicalTranscriptionJobRequest;
        class GetTranscriptionJobRequest;
        class GetVocabularyRequest;
        class GetVocabularyFilterRequest;
        class ListMedicalTranscriptionJobsRequest;
        class ListTranscriptionJobsRequest;
        class ListVocabulariesRequest;
        class ListVocabularyFiltersRequest;
        class StartMedicalTranscriptionJobRequest;
        class StartTranscriptionJobRequest;
        class UpdateVocabularyRequest;
        class UpdateVocabularyFilterRequest;

        typedef Aws::Utils::Outcome<CreateVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> CreateVocabularyOutcome;
        typedef Aws::Utils::Outcome<CreateVocabularyFilterResult, Aws::Client::AWSError<TranscribeServiceErrors>> CreateVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<GetMedicalTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyFilterResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<ListMedicalTranscriptionJobsResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListMedicalTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListTranscriptionJobsResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListVocabulariesResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListVocabulariesOutcome;
        typedef Aws::Utils::Outcome<ListVocabularyFiltersResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListVocabularyFiltersOutcome;
        typedef Aws::Utils::Outcome<StartMedicalTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> StartMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<StartTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> StartTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> UpdateVocabularyOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyFilterResult, Aws::Client::AWSError<TranscribeServiceErrors>> UpdateVocabularyFilterOutcome;

        typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
        typedef std::future<CreateVocabularyFilterOutcome> CreateVocabularyFilterOutcomeCallable;
        typedef std::future<DeleteMedicalTranscriptionJobOutcome> DeleteMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteTranscriptionJobOutcome> DeleteTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
        typedef std::future<DeleteVocabularyFilterOutcome> DeleteVocabularyFilterOutcomeCallable;
        typedef std::future<GetMedicalTranscriptionJobOutcome> GetMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<GetTranscriptionJobOutcome> GetTranscriptionJobOutcomeCallable;
        typedef std::future<GetVocabularyOutcome> GetVocabularyOutcomeCallable;
        typedef std::future<GetVocabularyFilterOutcome> GetVocabularyFilterOutcomeCallable;
        typedef std::future<ListMedicalTranscriptionJobsOutcome> ListMedicalTranscriptionJobsOutcomeCallable;
        typedef std::future<ListTranscriptionJobsOutcome> ListTranscriptionJobsOutcomeCallable;
        typedef std::future<ListVocabulariesOutcome> ListVocabulariesOutcomeCallable;
        typedef std::future<ListVocabularyFiltersOutcome> ListVocabularyFiltersOutcomeCallable;
        typedef std::future<StartMedicalTranscriptionJobOutcome> StartMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<StartTranscriptionJobOutcome> StartTranscriptionJobOutcomeCallable;
        typedef std::future<UpdateVocabularyOutcome> UpdateVocabularyOutcomeCallable;
        typedef std::future<UpdateVocabularyFilterOutcome> UpdateVocabularyFilterOutcomeCallable;
} // namespace Model

  class TranscribeServiceClient;

    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyFilterRequest&, const Model::CreateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalTranscriptionJobRequest&, const Model::DeleteMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteTranscriptionJobRequest&, const Model::DeleteTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyFilterRequest&, const Model::DeleteVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalTranscriptionJobRequest&, const Model::GetMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetTranscriptionJobRequest&, const Model::GetTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyRequest&, const Model::GetVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyFilterRequest&, const Model::GetVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalTranscriptionJobsRequest&, const Model::ListMedicalTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTranscriptionJobsRequest&, const Model::ListTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabulariesRequest&, const Model::ListVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabularyFiltersRequest&, const Model::ListVocabularyFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabularyFiltersResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartMedicalTranscriptionJobRequest&, const Model::StartMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartTranscriptionJobRequest&, const Model::StartTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyRequest&, const Model::UpdateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyFilterRequest&, const Model::UpdateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyFilterResponseReceivedHandler;

  /**
   * <p>Operations and objects for transcribing speech to text.</p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscribeServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranscribeServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Transcribe"; }


        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyOutcomeCallable CreateVocabularyCallable(const Model::CreateVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyAsync(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyFilterOutcome CreateVocabularyFilter(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyFilterOutcomeCallable CreateVocabularyFilterCallable(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyFilterAsync(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcome DeleteMedicalTranscriptionJob(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcomeCallable DeleteMedicalTranscriptionJobCallable(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMedicalTranscriptionJobAsync(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTranscriptionJobOutcome DeleteTranscriptionJob(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTranscriptionJobOutcomeCallable DeleteTranscriptionJobCallable(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTranscriptionJobAsync(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyOutcomeCallable DeleteVocabularyCallable(const Model::DeleteVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyAsync(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyFilterOutcome DeleteVocabularyFilter(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyFilterOutcomeCallable DeleteVocabularyFilterCallable(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyFilterAsync(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalTranscriptionJobOutcome GetMedicalTranscriptionJob(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMedicalTranscriptionJobOutcomeCallable GetMedicalTranscriptionJobCallable(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMedicalTranscriptionJobAsync(const Model::GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptionJobOutcome GetTranscriptionJob(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTranscriptionJobOutcomeCallable GetTranscriptionJobCallable(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTranscriptionJobAsync(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyOutcome GetVocabulary(const Model::GetVocabularyRequest& request) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyOutcomeCallable GetVocabularyCallable(const Model::GetVocabularyRequest& request) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyAsync(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyFilterOutcome GetVocabularyFilter(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyFilterOutcomeCallable GetVocabularyFilterCallable(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyFilterAsync(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMedicalTranscriptionJobsOutcome ListMedicalTranscriptionJobs(const Model::ListMedicalTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMedicalTranscriptionJobsOutcomeCallable ListMedicalTranscriptionJobsCallable(const Model::ListMedicalTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMedicalTranscriptionJobsAsync(const Model::ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTranscriptionJobsOutcome ListTranscriptionJobs(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTranscriptionJobsOutcomeCallable ListTranscriptionJobsCallable(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTranscriptionJobsAsync(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabulariesOutcome ListVocabularies(const Model::ListVocabulariesRequest& request) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabulariesOutcomeCallable ListVocabulariesCallable(const Model::ListVocabulariesRequest& request) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabulariesAsync(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabularyFiltersOutcome ListVocabularyFilters(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabularyFiltersOutcomeCallable ListVocabularyFiltersCallable(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabularyFiltersAsync(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMedicalTranscriptionJobOutcome StartMedicalTranscriptionJob(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Start a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMedicalTranscriptionJobOutcomeCallable StartMedicalTranscriptionJobCallable(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Start a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMedicalTranscriptionJobAsync(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTranscriptionJobOutcome StartTranscriptionJob(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTranscriptionJobOutcomeCallable StartTranscriptionJobCallable(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTranscriptionJobAsync(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyOutcome UpdateVocabulary(const Model::UpdateVocabularyRequest& request) const;

        /**
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyOutcomeCallable UpdateVocabularyCallable(const Model::UpdateVocabularyRequest& request) const;

        /**
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVocabularyAsync(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyFilterOutcome UpdateVocabularyFilter(const Model::UpdateVocabularyFilterRequest& request) const;

        /**
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyFilterOutcomeCallable UpdateVocabularyFilterCallable(const Model::UpdateVocabularyFilterRequest& request) const;

        /**
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVocabularyFilterAsync(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateVocabularyAsyncHelper(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyFilterAsyncHelper(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMedicalTranscriptionJobAsyncHelper(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTranscriptionJobAsyncHelper(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyAsyncHelper(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyFilterAsyncHelper(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMedicalTranscriptionJobAsyncHelper(const Model::GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTranscriptionJobAsyncHelper(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyAsyncHelper(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyFilterAsyncHelper(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMedicalTranscriptionJobsAsyncHelper(const Model::ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTranscriptionJobsAsyncHelper(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabulariesAsyncHelper(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabularyFiltersAsyncHelper(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMedicalTranscriptionJobAsyncHelper(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTranscriptionJobAsyncHelper(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyAsyncHelper(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyFilterAsyncHelper(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TranscribeService
} // namespace Aws
