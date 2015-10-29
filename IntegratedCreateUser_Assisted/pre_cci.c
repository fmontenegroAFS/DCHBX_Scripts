# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 266 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 505 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 508 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 532 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 566 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 589 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 613 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 692 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 753 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 768 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 792 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 804 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 812 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 818 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 916 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 923 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 945 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1021 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1050 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1062 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


int vtc_connect(char * servername, int portnum, int options);
int vtc_disconnect(int pvci);
int vtc_get_last_error(int pvci);
int vtc_query_column(int pvci, char * columnName, int columnIndex, char * *outvalue);
int vtc_query_row(int pvci, int rowIndex, char * **outcolumns, char * **outvalues);
int vtc_send_message(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_if_unique(int pvci, char * column, char * message, unsigned short *outRc);
int vtc_send_row1(int pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
int vtc_update_message(int pvci, char * column, int index , char * message, unsigned short *outRc);
int vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char * message, char	*ifmessage,	unsigned short 	*outRc);
int vtc_update_row1(int pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
int vtc_retrieve_message(int pvci, char * column, char * *outvalue);
int vtc_retrieve_messages1(int pvci, char * columnNames, char * delimiter, char * **outvalues);
int vtc_retrieve_row(int pvci, char * **outcolumns, char * **outvalues);
int vtc_increment(int pvci, char * column, int index , int incrValue, int *outValue);
int vtc_clear_message(int pvci, char * column, int index , unsigned short *outRc);
int vtc_clear_column(int pvci, char * column, unsigned short *outRc);
int vtc_ensure_index(int pvci, char * column, unsigned short *outRc);
int vtc_drop_index(int pvci, char * column, unsigned short *outRc);
int vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);
int vtc_create_column(int pvci, char * column,unsigned short *outRc);
int vtc_column_size(int pvci, char * column, int *size);
void vtc_free(char * msg);
void vtc_free_list(char * *msglist);
int lrvtc_connect(char * servername, int portnum, int options);
int lrvtc_disconnect();
int lrvtc_query_column(char * columnName, int columnIndex);
int lrvtc_query_row(int columnIndex);
int lrvtc_send_message(char * columnName, char * message);
int lrvtc_send_if_unique(char * columnName, char * message);
int lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
int lrvtc_update_message(char * columnName, int index , char * message);
int lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
int lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
int lrvtc_retrieve_message(char * columnName);
int lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
int lrvtc_retrieve_row();
int lrvtc_increment(char * columnName, int index , int incrValue);
int lrvtc_clear_message(char * columnName, int index);
int lrvtc_clear_column(char * columnName); 
int lrvtc_ensure_index(char * columnName); 
int lrvtc_drop_index(char * columnName); 
int lrvtc_clear_row(int rowIndex);
int lrvtc_create_column(char * columnName);
int lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 

















# 1 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"





typedef int PVCI2;
typedef int VTCERR2;

 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(int pvci);
extern VTCERR2  vtc_get_last_error(int pvci);

 
extern VTCERR2  vtc_query_column(int pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(int pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(int pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(int pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(int pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(int pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(int pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(int pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(int pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(int pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_increment(int pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(int pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(int pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(int pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(int pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(int pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(int pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(int pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern int     lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern int     lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1























































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);










# 716 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 729 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 767 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 835 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2



void addDynaTraceHeader(char* header){
	char* headerValue;
	int headerValueLength;
	int vuserid, scid;
	char *groupid, *timestamp;
	char* vuserstring=(char*) malloc(sizeof(char) * 10);

	web_save_timestamp_param("TimeStamp", "LAST");
	timestamp=lr_eval_string("{TimeStamp}");

	lr_whoami(&vuserid, &groupid, &scid);
	itoa(vuserid,vuserstring,10);

	headerValueLength = strlen(header) + 4 + strlen(vuserstring) + 4 + strlen(timestamp) + 1;
	headerValue = (char*) malloc(sizeof(char) * headerValueLength);
	strcpy(headerValue, header);
	strcat(headerValue,";VU=");
	strcat(headerValue,vuserstring);
	strcat(headerValue,";ID=");
	strcat(headerValue,timestamp);

	web_add_header("X-dynaTrace", headerValue);
	free(headerValue);
	free(vuserstring);
}


 
 





# 3 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	 
	 
	 
			
	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_set_max_html_param_len("6270");

	srand(atoi(lr_eval_string("{MillisSeed}")));
	
	return 0;
}
# 4 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "ScriptFlow.c" 1
ScriptFlow()
{

	char dp_UserID[64];
	
	lr_think_time(10);
	
	lr_save_int(RandomRange(3,10),"LNameLength");
	random_alpha("randomLN",atoi(lr_eval_string("{LNameLength}")));	
	
	SSNGenerator("Assisted_SSN");
		
	sprintf(dp_UserID, "IA_%s_%s", lr_eval_string("{randomLN}"), lr_eval_string("{pSSN3dep1_1}"));
	
	lr_save_string(dp_UserID, "dp_UserID");

 
	               
 
	
	
 
	
 
		
	CreateUserFlow();
	
	lr_think_time(20);
	
	Curam_StartApp_Misc_URLS();
	
	lr_think_time(30);
	
	Logout_Curam();
	
	return 0;
}
# 5 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "Drupal_Steps.c" 1
Drupal_Steps()
{

	web_add_cookie("SSESS637adb3fad27e0085dbb0898a1450649=UUEMFiy_c0rnu9vj3jgo-Mz0B_YoJJFvISlgNl-vp5Q; DOMAIN={p_IA_URL}");

	web_add_cookie("has_js=1; DOMAIN={p_IA_URL}");
	
	lr_start_transaction("0001_Load_Integrated_HomePage");
	
	addDynaTraceHeader("NA=0001_Load_Integrated_HomePage_{dp_UserID};PC=%7Bp_IA_URL%7D");
	
	web_url("{p_IA_URL}", 
		"URL=https://{p_IA_URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("0001_Load_Integrated_HomePage",2);
	
	lr_think_time(13);

	lr_start_transaction("0002_Click_Create_Account");

	addDynaTraceHeader("NA=0002_Click_Create_Account_{dp_UserID};PC=CreateAccount");
	
	web_link("Create Account", 
		"Text=Create Account", 
		"Ordinal=1", 
		"Snapshot=t16.inf", 
		"LAST");

	lr_end_transaction("0002_Click_Create_Account",2);
	
	lr_think_time(13);
	return 0;
}
# 6 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "CreateUserFlow.c" 1
CreateUserFlow()
{
	
	 
	web_reg_save_param_regexp("ParamName=authenticity_token", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=Yes", "RequestUrl=*/sign_up*", "LAST");
	
	lr_start_transaction("0003_Select_Individual");
	addDynaTraceHeader("NA=0003_Select_Individual_{dp_UserID};PC=assisted");

 
# 20 "CreateUserFlow.c"

	web_url("search",
		"URL=http://enroll-preprod.dchbx.org/insured/consumer_role/search?aqhp=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://enroll-preprod.dchbx.org/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");		
	
	lr_end_transaction("0003_Select_Individual",2);

	lr_think_time(20);

	lr_start_transaction("0004_Create_EnrollApp_User");

 

	web_submit_data("users",
		"Action=http://{p_EA_URL}/users",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/users/sign_up",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=utf8", "Value=✓", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token}", "ENDITEM",
		"Name=user[referer]", "Value=", "ENDITEM",
 
		"Name=user[email]", "Value={dp_UserID}@{emailDomain}", "ENDITEM",
		"Name=user[password]", "Value=Abcd!234", "ENDITEM",
		"Name=user[password_confirmation]", "Value=Abcd!234", "ENDITEM",
		"Name=user[invitation_id]", "Value=", "ENDITEM",
		"Name=commit", "Value=Create account", "ENDITEM",
		"LAST");

	lr_end_transaction("0004_Create_EnrollApp_User",2);

	lr_think_time(20);

 
	web_reg_save_param_regexp( "ParamName=authenticity_token_1", "RegExp=\\ content=\"(.*?)\"\\ ", "Ordinal=2", "SEARCH_FILTERS", "Scope=Body", "IgnoreRedirections=No", "RequestUrl=*/match*", "LAST");

	 
	web_reg_save_param_regexp("ParamName=5D_Param","RegExp=person%5Buser_id%5D=(.*?)\">Continue","SEARCH_FILTERS","Scope=Body","IgnoreRedirections=No","RequestUrl=*/match*","LAST");
	
	lr_start_transaction("0005_Personal_Info");

 

 
 
 
 
 
 
 
 
 

	web_submit_data("match", 
		"Action=http://{p_EA_URL}/insured/consumer_role/match", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{p_EA_URL}/insured/consumer_role/search?uqhp=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=utf8", "Value=✓", "ENDITEM", 
		"Name=authenticity_token", "Value={authenticity_token}", "ENDITEM", 
		"Name=people[id]", "Value=", "ENDITEM", 
		"Name=person[first_name]", "Value=assisted", "ENDITEM", 
		"Name=person[middle_name]", "Value=", "ENDITEM", 
		"Name=person[last_name]", "Value={randomLN}", "ENDITEM", 
		"Name=person[name_sfx]", "Value=", "ENDITEM", 
		"Name=person[dob]", "Value=1978-01-01", "ENDITEM", 
		"Name=jq_datepicker_ignore_person[dob]", "Value=01/01/1978", "ENDITEM", 
		"Name=person[ssn]", "Value={Assisted_SSN}", "ENDITEM", 
		"Name=person[no_ssn]", "Value=0", "ENDITEM", 
		"Name=person[gender]", "Value=male", "ENDITEM", 
		"LAST");	
		
	
	lr_end_transaction("0005_Personal_Info",2);

	lr_think_time(20);

 
	web_reg_save_param_regexp( "ParamName=tap_token", "RegExp=tap_token=(.*?)TapSubmitURL", "SEARCH_FILTERS", "Scope=Headers", "IgnoreRedirections=No", "RequestUrl=*/obrareq.cgi*", "LAST");

 
 
	
 

	lr_start_transaction("0006_Continue");

	addDynaTraceHeader("NA=0006_Continue_{dp_UserID};PC=consumer_role");
	
	web_submit_data("consumer_role",
		"Action=http://{p_EA_URL}/insured/consumer_role?person%5Bdob%5D=1978-01-01&person%5Bfirst_name%5D=assisted&person%5Bgender%5D=male&person%5Blast_name%5D={randomLN}&person%5Bmiddle_name%5D=&person%5Bname_sfx%5D=&person%5Bno_ssn%5D=0&person%5Bssn%5D={Assisted_SSN}&person%5Buser_id%5D={5D_Param}",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{p_EA_URL}/insured/consumer_role/match?utf8=%E2%9C%93&people%5Bid%5D=&person%5Bfirst_name%5D=assisted&person%5Bmiddle_name%5D=&person%5Blast_name%5D={randomLN}&person%5Bname_sfx%5D=&person%5Bdob%5D=1978-01-01&jq_datepicker_ignore_person%5Bdob%5D=01%2F01%2F1978&person%5Bssn%5D={Assisted_SSN}&person%5Bno_ssn%5D=0&person%5Bgender%5D=male",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=_method", "Value=post", "ENDITEM",
		"Name=authenticity_token", "Value={authenticity_token_1}", "ENDITEM",
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
		"LAST");

	lr_end_transaction("0006_Continue",2);

	web_add_cookie("has_js=1; DOMAIN={p_Webapp_URL}");

	lr_think_time(20);

 

	 
	web_reg_find("Text/IC=The username or password you entered is incorrect.", "SAVECOUNT=OIMLOGIN", "LAST" );
	web_reg_find("Text/IC=Please select three questions from the drop downs below", "SAVECOUNT=LOGIN_Success", "LAST" );
	
	lr_start_transaction("0007_Login_Curam");

	addDynaTraceHeader("NA=0007_Login_Curam_{dp_UserID};PC=loginAuth.do");
	
	web_submit_data("loginAuth.do",
		"Action=https://{p_Webapp_URL}/oaam_server/loginAuth.do",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/oaam_server/oamLoginPage.jsp?tap_token={tap_token}TapSubmitURL=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foam%2Fserver%2Fdap%2Fcred_submit&authn_try_count=0&contextType=external&TAPPartnerId=OAAMTAPPartner&miscCookie=Secure%3Bhttponly&MatchLDAPAttribute=uid&daptoken=string&challenge_url=https%3A%2F%2F{p_Webapp_URL}%3A443%2Foaam_server%2FoamLoginPage.jsp&ssoCookie=Secure%3Bhttponly&request_id=-8172100689942012479&locale=en_US&resource_url=https%253A%252F%252F{p_Webapp_URL}%252FNavigationLoginApp",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=clientOffset", "Value=-4", "ENDITEM",
 
		"Name=userid", "Value={dp_UserID}@{emailDomain}", "ENDITEM",
		"Name=pass", "Value=Abcd!234", "ENDITEM",
		"LAST");

	if (strcmp(lr_eval_string("{LOGIN_Success}"), "0") > 0)
	{
			lr_end_transaction("0007_Login_Curam",0);
	}
	else if (strcmp(lr_eval_string("{OIMLOGIN}"), "0") > 0)
	{
		lr_end_transaction("0007_Login_Curam",1);
		lr_error_message("1st Login Msg - Incorrect Login %s", lr_eval_string("{dp_UserID}"));
		lr_exit(2, 2);
	}
	else
	{
		lr_end_transaction("0007_Login_Curam",1);
		lr_error_message("Failed to Login User 1st Time in OIM %s", lr_eval_string("{dp_UserID}"));
		lr_exit(2, 2);
	}

 
	
	lr_think_time(20);
	
	web_reg_save_param("corr_fkvalue","LB=fk\" value=\"","RB=\">","LAST");
 
 
 
     
	web_reg_save_param_regexp("ParamName=question0", "RegExp='>(.*?)</option", "Ordinal=2",	"SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");
	web_reg_save_param_regexp("ParamName=question1", "RegExp='>(.*?)</option", "Ordinal=8", "SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");
	web_reg_save_param_regexp("ParamName=question2", "RegExp='>(.*?)</option", "Ordinal=14","SEARCH_FILTERS",	"Scope=Body","IgnoreRedirections=Yes", "RequestUrl=*/registerQuestions.do*","LAST");

	lr_start_transaction("0007_1_Login_Curam_authJump");	
		addDynaTraceHeader("NA=0007_1_Login_Curam_authJump_{dp_UserID};PC=authJump.do");
		web_url("authJump.do", 
		"URL=https://{p_Webapp_URL}/oaam_server/authJump.do?jump=false&clientOffset=-4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/oaam_server/loginAuth.do", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=dhs/ui/dcas-ui-wrapper-css/calendar_multiday.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/date.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/datepicker.1.7.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap.min.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/field.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/extlink.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/views.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/bootstrap-theme.xtras.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/shared.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/ctools.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/v2_3up_landing.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/login.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"Url=dhs/ui/dcas-ui-wrapper-css/create-account.css?nu05sh", "Referer=https://{p_Webapp_URL}/oaam_server/registerQuestions.do", "ENDITEM", 
		"LAST");
	lr_end_transaction("0007_1_Login_Curam_authJump", 2);
 
 

	lr_save_string("question0", "question00");
	lr_save_string("question1", "question11");
	lr_save_string("question2", "question22");
	
	web_convert_param("question0", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");

	web_convert_param("question1", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");
	
	web_convert_param("question2", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");
	
 	
	lr_think_time(20);
	
	lr_start_transaction("0008_Security_Questions");	
	
	addDynaTraceHeader("NA=0008_Security_Questions_{dp_UserID};PC=registerQuestions.do");

	web_submit_form("registerQuestions.do",
		"Snapshot=t9.inf", 
		"ITEMDATA", 
		"Name=question0", "Value={question0}", "ENDITEM", 
		"Name=Bharosa_Register_Pad0DataField", "Value=none", "ENDITEM", 
		"Name=question1", "Value={question1}", "ENDITEM", 
		"Name=Bharosa_Register_Pad1DataField", "Value=none", "ENDITEM", 
		"Name=question2", "Value={question2}", "ENDITEM", 
		"Name=Bharosa_Register_Pad2DataField", "Value=none", "ENDITEM", 
		"Name=register", "Value=Continue", "ENDITEM", 
		"LAST");
	
	
	 	
# 300 "CreateUserFlow.c"
	lr_end_transaction("0008_Security_Questions", 2);
	
	lr_think_time(20);
	
 
	web_reg_save_param_regexp(
		"ParamName=o3ctx",
		"RegExp=o3ctx=(.*?)\";\\\r\\\n\\ \\ \\ \\ \\ \\ \\\r",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/application.js*",
		"LAST");
	
lr_start_transaction("0009_Start_Application");
	
	addDynaTraceHeader("NA=0009_Start_Application_{dp_UserID};PC=application.do");
	web_url("application.do", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/userhome.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=CDEJ/jscript/ibmidxtk/idx/icons/commonIcons.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/base.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/themes/v6/css/optimal_browser_msg.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/application-banner.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/app/ExternalApplication.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/curam/widget/menu/MenuPane.css", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/curam-extapp.css", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/Button.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/text.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Widget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/registry.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/main.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/Stateful.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_OnDijitClickMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_FocusMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/focus.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/window.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/a11y.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/manager.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/uacss.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/hccss.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_CssStateMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/touch.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_TemplatedMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/string.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cache.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormWidgetMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ButtonMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ToggleButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_ToggleButtonMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ContentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/i18n.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_ContentPaneResizeMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/utils.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Contained.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/html.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/parser.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/_base/url.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/date/stamp.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/nls/loading.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/TooltipDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_DialogMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/BorderContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cookie.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/regexp.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_LayoutWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Container.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/require.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/main.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/_common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/Provider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/manager.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/LocalStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/WhatWGStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/BehaviorStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/storage/CookieStorageProvider.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ContentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/html/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ExpandoPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/define.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/RuntimeContext.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/Constants.js", "ENDITEM", 
		"Url=CDEJ/jscript/cm/_base/_dom.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ResourceBundle.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ScreenContext.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/onLoad.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/UimDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/dialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/Refresh.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/tab.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ContextPanel.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/refresh/TabRefreshController.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/refresh/RefreshEvent.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/DialogObject.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/UIMFragment.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/layout/TabContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/_TabContainerBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/nls/common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/TabController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/StackController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Menu.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/popup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/place.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/BackgroundIframe.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/DropDownMenu.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_MenuBase.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_KeyNavContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/layout/ScrollingTabController.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_WidgetsInTemplateMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_HasDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/OptimalBrowserMessage.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/ui/ClientDataAccessor.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/app/ExternalApplication.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/containers/TransitionContainer.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/cache/CacheLRU.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/collections/Dictionary.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/collections/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/menu/MenuPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/componentWrappers/ListWraper.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/form/ToggleButtonGroup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Tooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverCard.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Moveable.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/Mover.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/common.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/autoscroll.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/dnd/TimedMoveable.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Menu.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_MenuOpenOnHoverMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/DropDownButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/dijit.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/WidgetSet.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/focus.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/place.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/popup.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/scroll.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/sniff.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/typematic.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/typematic.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/wai.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_base/window.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueWidget.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_FormValueMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverCard.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/CheckedMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuBar.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBar.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/Header.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/Header.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuDialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/io/iframe.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/_EventTriggerMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/MenuHeading.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuSeparator.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/oneui/nls/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuBarItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/PopupMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/MenuBarItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ComboButton.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/widget/menu/BannerMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConfirmation.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/util/ui/AppExitConditionHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/TextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_TextBoxMixin.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/en/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/curam/application/nls/en-us/Debug.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/Commons.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/io/script.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/SlidingHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/NodeList-traverse.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/EventHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/AjaxHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/xml/parser.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/FormHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/UIMFragment.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/LoadingHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/Dialog.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/DialogUnderlay.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/util/PopupManager.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/EligibilityResult.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/CategoryAction.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/ProgramAction.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/eligibilityresults/Transitions.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx/easing.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/HoverHelpTooltip.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/_OrientedDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/InlineDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/Rotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/MenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/TitlePane.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/FragmentPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/DropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/cwtk/widget/ContrastModeChooser.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRCommons.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRTitlePane.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCREventHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRAjaxHandler.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRDropDown.js", "ENDITEM", 
		"Url=CDEJ/jscript/HCRMenuItem.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/layout/ScrollPane.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/_Templated.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberSpinner.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/_Spinner.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/RangeBoundTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/MappedTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/ValidationTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/nls/validate.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/NumberTextBox.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/cldr/nls/en/number.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dijit/form/Form.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/AutoRotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/Rotator.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Pan.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Slide.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojox/widget/rotator/Controller.js", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/menu-icons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/fx/Toggler.js", "ENDITEM", 
		"Url=CDEJ/jscript/dojotk/dojo/resources/blank.gif", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/logo-f.png", "ENDITEM", 
		"Url=Images/cw_loading_icon.gif", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/custom.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/contentfull-bg.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=CDEJ/extapp/themes/curam-extapp/image/white-75-percent-transparent.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/css/main.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_faq.png]", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-home.png]", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerLogo.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[app-banner-logo.png]", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons_TopBanner.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=CDEJ/jscript/ibmidxtk/idx/themes/oneui/idx/oneui/images/headerIcons.png", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/themes/oneui/oneui-curam-custom.css", "ENDITEM", 
		"Url=servlet/PathResolver?r=i&p=/config/tablayout/image[help_contactus.png]", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("0009_Start_Application", 2);
	
	lr_think_time(20);

	
	return 0;
}
# 7 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "Curam_StartApp_Misc_URLS.c" 1
Curam_StartApp_Misc_URLS()
{
	
	lr_start_transaction("0010_Curam_StartApp_Misc_URLS");
	
		addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_1_{dp_UserID};PC=0010_ExternalApplication.html");
		web_custom_request("0010_ExternalApplication.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/curam/app/templates/ExternalApplication.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_2_{dp_UserID};PC=Menu.html");
	web_custom_request("Menu.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/Menu.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_3_{dp_UserID};PC=_MenuColumn.html");
	web_custom_request("_MenuColumn.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/_MenuColumn.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_4_{dp_UserID};PC=HoverCard.html");
	web_custom_request("HoverCard.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverCard.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_5_{dp_UserID};PC=MenuDialog.html");
	web_custom_request("MenuDialog.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuDialog.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_6_{dp_UserID};PC=MenuHeading.html");
	web_custom_request("MenuHeading.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/MenuHeading.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_7_{dp_UserID};PC=HoverHelpTooltip.html");
	web_custom_request("HoverHelpTooltip.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/ibmidxtk/idx/oneui/templates/HoverHelpTooltip.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_8_{dp_UserID};PC=InlineDropDown.html");
	web_custom_request("InlineDropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/InlineDropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_9_{dp_UserID};PC=Rotator.html");
	web_custom_request("Rotator.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/Rotator.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_10_{dp_UserID};PC=MenuItem.html");
	web_custom_request("MenuItem.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/MenuItem.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_11_{dp_UserID};PC=TitlePane.html");
	web_custom_request("TitlePane.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/TitlePane.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_12_{dp_UserID};PC=DropDown.html");
	web_custom_request("DropDown.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/DropDown.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_13_{dp_UserID};PC=ContrastModeChooser.html");
	web_custom_request("ContrastModeChooser.html", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/jscript/cwtk/widget/templates/ContrastModeChooser.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_14_{dp_UserID};PC=PathResolver");
	web_submit_data("PathResolver", 
		"Action=https://{p_Webapp_URL}/CitizenPortal/servlet/PathResolver?r=j&p=/config/tablayout/extapp[CITWSAPP]", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=dojo.preventCache", "Value=1443210486406", "ENDITEM", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_15_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&testParam1=1&testParam2=2&dojo.preventCache=1443210486411",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t25.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_16_{dp_UserID};PC=CitizenWorkspace_userHomeResolverPage.do_2");
	web_custom_request("CitizenWorkspace_userHomeResolverPage.do_2",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/CitizenWorkspace_userHomeResolverPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210487060",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t26.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_17_{dp_UserID};PC=application-banner-fragment.jspx");
	web_custom_request("application-banner-fragment.jspx", 
		"URL=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/application-banner-fragment.jspx?dojo.preventCache=1443210487043", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		"LAST");

	addDynaTraceHeader("NA=0010_Curam_StartApp_Misc_URLS_18_{dp_UserID};PC=UIMIFrameWrapperPage.do");
	web_custom_request("UIMIFrameWrapperPage.do",
		"URL=https://{p_Webapp_URL}/CitizenPortal/en_US/UIMIFrameWrapperPage.do?uimPageID=StandardUser_home&o3ctx={o3ctx}&pageParams=&dojo.preventCache=1443210488053",
		"Method=GET",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/application.do",
		"Snapshot=t28.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		"EXTRARES",
		"URL=../servlet/PathResolver?r=i&p=/config/tablayout/image[ext-banner-user-arrow.png]", "Referer=https://{p_Webapp_URL}/CitizenPortal/CDEJ/extapp/themes/curam-extapp/application-banner.css", "ENDITEM",
		"URL=../CDEJ/jscript/curam/core-uim.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/dojotk/dojo/nls/cdej_en-us.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/en/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"URL=../CDEJ/jscript/curam/application/nls/en-us/TabMenu.js", "Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/StandardUser_homePage.do?pageParams=&o3ctx={o3ctx}&dojo.preventCache=1443210488053", "ENDITEM",
		"LAST");

	lr_think_time(10);

 
 
 
 
 
 
 
 
 
 
 
	
	lr_end_transaction("0010_Curam_StartApp_Misc_URLS", 2);
	
	return 0;
}
# 8 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "Logout_Curam.c" 1
Logout_Curam()
{

	lr_start_transaction("0999_Logout_Curam");
	addDynaTraceHeader("NA=0999_Logout_Curam;PC=logout.jsp");
	web_url("logout.jsp",
		"URL=https://{p_Webapp_URL}/CitizenPortal/logout.jsp?end_url=https://{p_IA_URL}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://{p_Webapp_URL}/CitizenPortal/en_US/LogoutWrapperPage.do?o3ctx={o3ctx}&dojo.preventCache=1443210495845",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"LAST");
	
	lr_end_transaction("0999_Logout_Curam", 2);
	
	lr_think_time(20);
	
	lr_start_transaction("1000_Last_Logout");
	
	addDynaTraceHeader("NA=1000_Last_Logout;PC=logout");
	web_submit_form("logout", 
		"Snapshot=t31.inf", 
		"ITEMDATA", 
		"LAST");
	lr_end_transaction("1000_Last_Logout", 2);
	
	lr_think_time(20);
	
	return 0;
}
# 9 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "DataCreation.c" 1
GenerateSSNs()
{
	SSNGenerator("Assisted_SSN");
	
		lr_output_message(lr_eval_string("{Assisted_SSN}"));
	return 0;
}

SSNGenerator(char* param_name)
{
	int randSSN[3];
	char EmployeeDep1SSN[100];
	
	randSSN[0] = RandomRange(100,999);
	randSSN[1] = RandomRange(10,99);
	randSSN[2] = RandomRange(1000,9999);
	
	lr_save_int(randSSN[0],"pSSN1dep1_1");
	lr_save_int(randSSN[1],"pSSN2dep1_1");
	lr_save_int(randSSN[2],"pSSN3dep1_1");

	sprintf(EmployeeDep1SSN, "%s-%s-%s", lr_eval_string("{pSSN1dep1_1}"), lr_eval_string("{pSSN2dep1_1}"), lr_eval_string("{pSSN3dep1_1}"));
	lr_save_string(EmployeeDep1SSN, "EmployeeDep1SSN");
	 
	lr_save_string(EmployeeDep1SSN, param_name);
  return 0;
}

RandomRange(int lower,int upper)
{
	return (rand()%(upper-lower+1))+lower;
	
}

random_alpha(char* param_name, int length) {
	char buff[32] = "";
  int r,i;
  char c;
  srand((unsigned int)_time32(0));  
  for (i = 0; i < length; i++) {
	 
        
	r = rand() % 26 + 97;  
    c = (char)r;
		buff[i] = c;
    printf("%c", c);
  }
	lr_save_string(buff, param_name);
  return 0;
}

HTMLEncoder(char* param_name){
	
 
	lr_save_string(param_name, "InputParam");
	
	web_convert_param("InputParam", "SourceEncoding=HTML",
            "TargetEncoding=PLAIN", "LAST");

	lr_output_message("%s", lr_eval_string("{InputParam}"));

 
	
 
	return 0;
	
}
# 10 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 11 "c:\\users\\francis.montenegro\\documents\\github\\dchbx_perf_scripts\\integratedcreateuser_assisted\\\\combined_IntegratedCreateUser_Assisted.c" 2

