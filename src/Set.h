/*
 * Set.h
 *
 * Created: 25.12.2011 23:27:26
 *  Author: Profile
 */ 


#ifndef SET_H_
#define SET_H_


#define EXECUTION_UNIT_SWITCH_ON 1
#define EXECUTION_UNIT_SWITCH_OFF 0


//--------------------------------------События и ошибки монетоприёмника---------------------//

#define COIN_ERROR						10
#define CHANGER_NO_CREDIT_ERROR			11	// Ошибка: Монета была принята, но не попала на своё место, когда кредит был начислен
#define CHANGER_DEF_TUBE_SENS_ERROR		12	// Ошибка: Монетник обнаружил, что один из сенсоров туб работает ненормально
#define CHANGER_UNPLUGGED_ERROR			13	// Ошибка: Монетник обнаружил, что он был отключен/перемещён 
#define CHANGER_TUBE_JAM_ERROR			14	// Ошибка: Застревание монет в тубе
#define CHANGER_ROM_ERROR				15	// Ошибка: Внутренняя ошибка памяти монетника
#define CHANGER_ROUTING_ERROR			16	// Ошибка: Монета принята, но не проследовала в назначенное место
#define CHANGER_COIN_JAM_ERROR			17	// Ошибка: Застревание монет в приёмном узле
#define CHANGER_BOX_FULL_EVENT			18	// Событие: денежный бокс заполнен--------------------------------------------------------------------------------------
#define CHANGER_CONNECT_ERROR			19	// Ошибка связи с монетником

//------------------------------------------События и ошибки банкнотоприёмника----------------//

#define BILL_CONNECT_ERROR					20	// Ошибка связи с банкнотоприёмником
#define BILL_DEFECTIVE_MOTOR_ERROR			21	// Ошибка: Проблемы с одним из моторов
#define BILL_SENSOR_PROBLEM_ERROR			22	// Ошибка: Проблемы с одним из оптических датчиков
#define BILL_ROM_ERROR						23	// Ошибка: Ошибка контрольной суммы внутренней памяти монетника
#define BILL_VALIDATOR_JAMMED_ERROR			24	// Ошибка: Застревание купюры в приёмном узле
#define BILL_BILL_REMOVED_ERROR				25	// Ошибка: Извлечение купюры в положении удержания купюры
#define BILL_CASH_BOX_ERROR					26	// Ошибка: Отсоединение cashbox
#define BILL_CREDITED_BILL_REMOVED_ERROR	27	// Ошибка: Извлечение купюры после того как она была принята и уложена в стакере
#define BILL_CASHBOX_NEAR_FULL_EVENT		28	// Событие: бокс с купюрами почти наполнен---------------------------------------------------------------------------------
#define BILL_CASHBOX_FULL_EVENT				29	// Событие: бокс с купюрами наполнен

//----------------------------------События и ошибки стаканоотщепителя------------------------//

#define CUPDISP_SENSOR_ERROR		31	// Ошибка датчиков отщепителя стаканов
#define CUP_NOCUP_INTIME_ERROR		32	// Ошибка выдачи стакана (если в отведённое время не сработал датчик наличия стакана) ----------------------------------------
#define CUP_NOCUP_ERROR				33	// Ошибка выдачи стакана (стаканы закончились)--------------------------------------------------------------------------------
#define CUP_DISPROTSENS_ERROR		34	// Ошибка датчиков отщепителя при выдаче стакана -----------------------------------------------------------------------------
#define CUP_CAPASROTSENS_ERROR		35	// Ошибка датчиков при повороте ёмкости со стаканами--------------------------------------------------------------------------
#define CUP_NEAR_FINISH_EVENT		36	// Событие: стаканы заканчиваются (только для отчёта)
#define CUP_FINISHED_EVENT			37	// Событие(ошибка): Стаканы закончились---------------------------------------------------------------------------------------

//----------------------------------События и ошибки, связанные с водой-----------------------//

#define WPUMP_PUMP_ERROR			41	// Ошибка насоса высокого давления (если за отведённое время работы насоса не сработал датчик верхнего уровня)----------------
#define WATER_FLOWSENS_ERROR		42	// Ошибка: нетсигнала с датчика расхода воды. Возможно нет воды.
#define WATER_OVERFLOW_EVENT		43	// Событие(ошибка): переполнения сливного бака--------------------------------------------------------------------------------
#define WATER_NEAR_FINISH_EVENT		46	// Событие: вода скоро закончится (только для отчёта)
#define WATER_FINISHED_EVENT		47	// Событие(ошибка): вода закончилась------------------------------------------------------------------------------------------

//----------------------------------События и ошибки сиропов----------------------------------//

#define SYRUP_1_FINISHED_EVENT		51	// Событие(ошибка): сироп #1 закончился--------------------------------------------------------------------------------------
#define SYRUP_2_FINISHED_EVENT		52	// Событие(ошибка): сироп #2 закончился--------------------------------------------------------------------------------------
#define SYRUP_3_FINISHED_EVENT		53	// Событие(ошибка): сироп #3 закончился--------------------------------------------------------------------------------------
#define SYRUP_4_FINISHED_EVENT		54	// Событие(ошибка): сироп #4 закончился--------------------------------------------------------------------------------------
#define SYRUP_5_FINISHED_EVENT		55	// Событие(ошибка): сироп #5 закончился--------------------------------------------------------------------------------------
#define SYRUP_NEAR_FINISH_EVENT		56	// Событие: сиропы заканчиваются (только для отчёта)
#define SYRUP_FINISHED_EVENT		57	// Событие(ошибка): сиропы закончились---------------------------------------------------------------------------------------

//----------------------------------Программные ошибки-----------------------------------------//

#define PR_QUEUECREATE_ERROR		61	// Программная ошибка. Ошибка создания очередей
#define MEM_SETLOADING_ERROR		62	// Ошибка загрузки настроек автомата
#define MEM_SHORTLOADING_ERROR		63	// Ошибка загрузки короткой бухгалтерии автомата
#define MEM_LONGLOADING_ERROR		64	// Ошибка загрузки длинной бухгалтерии автомата
#define MEM_BALANCELOADING_ERROR	65	// Ошибка загрузки баланса автомата

//----------------------------------Ошибки GSM-модема-----------------------------------------//

#define GSM_CONNECTION_ERROR		71	// Ошибка: нет связи с модемом (модем не отвечает)
#define GSM_NETWORK_ERROR			72	// Ошибка: сеть не найдена


#define DOOR_OPENED_EVENT			101	// Событие открытия двери
#define DOOR_CLOSED_EVENT			102	// Событие закрытия двери

#define POWER_ON_EVENT				111	// Включение автомата
#define POWER_OFF_EVENT				112	// Выключение автомата (записывается в память после включения и проверки времени последней записи в память)

#define STAT_ENTER_EVENT			121	// Событие входа в инкассацию
#define SHORT_STAT_CLEAR_EVENT		122	// Событие обнуления короткой бухгалтерии
#define PRODUCTS_RELOAD_EVENT		123	// Событие загрузка товаров
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------//

typedef struct
{
	uint8_t ERRORSTATE_1_8:8;
	//---
	uint8_t ERRORSTATE_9:1;
	uint8_t ERRORSTATE_COIN_ERROR:1;						//	10
	uint8_t ERRORSTATE_CHANGER_NO_CREDIT_ERROR:1;			//	11	// Ошибка: Монета была принята, но не попала на своё место, когда кредит был начислен
	uint8_t ERRORSTATE_CHANGER_DEF_TUBE_SENS_ERROR:1;		//	12	// Ошибка: Монетник обнаружил, что один из сенсоров туб работает ненормально
	uint8_t ERRORSTATE_CHANGER_UNPLUGGED_ERROR:1;			//	13	// Ошибка: Монетник обнаружил, что он был отключен/перемещён 
	uint8_t ERRORSTATE_CHANGER_TUBE_JAM_ERROR:1;			//	14	// Ошибка: Застревание монет в тубе
	uint8_t ERRORSTATE_CHANGER_ROM_ERROR:1;					//	15	// Ошибка: Внутренняя ошибка памяти монетника
	uint8_t ERRORSTATE_CHANGER_ROUTING_ERROR:1;				//	16	// Ошибка: Монета принята, но не проследовала в назначенное место
	//---
	uint8_t ERRORSTATE_CHANGER_COIN_JAM_ERROR:1;			//	17	// Ошибка: Застревание монет в приёмном узле
	uint8_t ERRORSTATE_CHANGER_BOX_FULL_EVENT:1;			//	18	// Событие: денежный бокс заполнен--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_CHANGER_CONNECT_ERROR:1;				//	19	// Ошибка связи с монетником
	

//------------------------------------------События и ошибки банкнотоприёмника----------------//
	uint8_t ERRORSTATE_BILL_CONNECT_ERROR:1;				//	20	// Ошибка связи с банкнотоприёмником							//	20
	uint8_t ERRORSTATE_BILL_DEFECTIVE_MOTOR_ERROR:1;		//	21	// Ошибка: Проблемы с одним из моторов
	uint8_t ERRORSTATE_BILL_SENSOR_PROBLEM_ERROR:1;			//	22	// Ошибка: Проблемы с одним из оптических датчиков
	uint8_t ERRORSTATE_BILL_ROM_ERROR:1;					//	23	// Ошибка: Ошибка контрольной суммы внутренней памяти монетника
	uint8_t ERRORSTATE_BILL_VALIDATOR_JAMMED_ERROR:1;		//	24	// Ошибка: Застревание купюры в приёмном узле
	//---
	uint8_t ERRORSTATE_BILL_BILL_REMOVED_ERROR:1;			//	25	// Ошибка: Извлечение купюры в положении удержания купюры
	uint8_t ERRORSTATE_BILL_CASH_BOX_ERROR:1;				//	26	// Ошибка: Отсоединение cashbox
	uint8_t ERRORSTATE_BILL_CREDITED_BILL_REMOVED_ERROR:1;	//	27	// Ошибка: Извлечение купюры после того как она была принята и уложена в стакере
	uint8_t ERRORSTATE_BILL_CASHBOX_NEAR_FULL_EVENT:1;		//	28	// Событие: бокс с купюрами почти наполнен---------------------------------------------------------------------------------
	uint8_t ERRORSTATE_BILL_CASHBOX_FULL_EVENT:1;			//	29	// Событие: бокс с купюрами наполнен
	uint8_t ERRORSTATE_30:1;								//	30

//----------------------------------События и ошибки стаканоотщепителя------------------------//

	uint8_t ERRORSTATE_CUPDISP_SENSOR_ERROR:1;		//	31	// Ошибка датчиков отщепителя стаканов
	uint8_t ERRORSTATE_CUP_NOCUP_INTIME_ERROR:1;	//	32	// Ошибка выдачи стакана (если в отведённое время не сработал датчик наличия стакана) ----------------------------------------
	//---
	uint8_t ERRORSTATE_CUP_NOCUP_ERROR:1;			//	33	// Ошибка выдачи стакана (стаканы закончились)--------------------------------------------------------------------------------
	uint8_t ERRORSTATE_CUP_DISPROTSENS_ERROR:1;		//	34	// Ошибка датчиков отщепителя при выдаче стакана -----------------------------------------------------------------------------
	uint8_t ERRORSTATE_CUP_CAPASROTSENS_ERROR:1;	//	35	// Ошибка датчиков при повороте ёмкости со стаканами--------------------------------------------------------------------------
	uint8_t ERRORSTATE_CUP_NEAR_FINISH_EVENT:1;		//	36	// Событие: стаканы заканчиваются (только для отчёта)
	uint8_t ERRORSTATE_CUP_FINISHED_EVENT:1;		//	37	// Событие(ошибка): Стаканы закончились---------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_38:1;						//	38
	uint8_t ERRORSTATE_39:1;						//	39
	uint8_t ERRORSTATE_40:1;						//	40
	//---
//----------------------------------События и ошибки, связанные с водой-----------------------//

	uint8_t ERRORSTATE_WPUMP_PUMP_ERROR:1;			//	41	// Ошибка насоса высокого давления (если за отведённое время работы насоса не сработал датчик верхнего уровня)----------------
	uint8_t ERRORSTATE_WATER_FLOWSENS_ERROR:1;		//	42	// Ошибка: нетсигнала с датчика расхода воды. Возможно нет воды.
	uint8_t ERRORSTATE_WATER_OVERFLOW_EVENT:1;		//	43	// Событие(ошибка): переполнения сливного бака--------------------------------------------------------------------------------
	uint8_t ERRORSTATE_44:1;						//	44
	uint8_t ERRORSTATE_45:1;						//	45
	uint8_t ERRORSTATE_WATER_NEAR_FINISH_EVENT:1;	//	46	// Событие: вода скоро закончится (только для отчёта)
	uint8_t ERRORSTATE_WATER_FINISHED_EVENT:1;		//	47	// Событие(ошибка): вода закончилась------------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_48:1;						//	48
	//---
	uint8_t ERRORSTATE_49:1;						//	49
	uint8_t ERRORSTATE_50:1;						//	50

//----------------------------------События и ошибки сиропов----------------------------------//

	uint8_t ERRORSTATE_SYRUP_1_FINISHED_EVENT:1;	//  51	// Событие(ошибка): сироп #1 закончился--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_SYRUP_2_FINISHED_EVENT:1;	//	52	// Событие(ошибка): сироп #2 закончился--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_SYRUP_3_FINISHED_EVENT:1;	//	53	// Событие(ошибка): сироп #3 закончился--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_SYRUP_4_FINISHED_EVENT:1;	//	54	// Событие(ошибка): сироп #4 закончился--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_SYRUP_5_FINISHED_EVENT:1;	//	55	// Событие(ошибка): сироп #5 закончился--------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_SYRUP_NEAR_FINISH_EVENT:1;	//	56	// Событие: сиропы заканчиваются (только для отчёта)
	//---
	uint8_t ERRORSTATE_SYRUP_FINISHED_EVENT:1;		//	57	// Событие(ошибка): сиропы закончились---------------------------------------------------------------------------------------
	uint8_t ERRORSTATE_58:1;						//	58
	uint8_t ERRORSTATE_59:1;						//	59
	uint8_t ERRORSTATE_60:1;						//	60
//----------------------------------Программные ошибки-----------------------------------------//

	uint8_t ERRORSTATE_PR_QUEUECREATE_ERROR:1;		//	61	// Программная ошибка. Ошибка создания очередей
	uint8_t ERRORSTATE_MEM_SETLOADING_ERROR:1;		//	62	// Ошибка загрузки настроек автомата
	uint8_t ERRORSTATE_MEM_SHORTLOADING_ERROR:1;	//	63	// Ошибка загрузки короткой бухгалтерии автомата
	uint8_t ERRORSTATE_MEM_LONGLOADING_ERROR:1;		//	64	// Ошибка загрузки длинной бухгалтерии автомата
	//---
	uint8_t ERRORSTATE_MEM_BALANCELOADING_ERROR:1;	//	65	// Ошибка загрузки баланса автомата
	uint8_t ERRORSTATE_66:1;						//	66
	uint8_t ERRORSTATE_67:1;						//	67
	uint8_t ERRORSTATE_68:1;						//	68
	uint8_t ERRORSTATE_69:1;						//	69
	uint8_t ERRORSTATE_70:1;						//	70

//----------------------------------Ошибки GSM-модема-----------------------------------------//

	uint8_t ERRORSTATE_GSM_CONNECTION_ERROR:1;	//	71	// Ошибка: нет связи с модемом (модем не отвечает)
	uint8_t ERRORSTATE_GSM_NETWORK_ERROR:1;		//	72	// Ошибка: сеть не найдена
	//---
	uint8_t ERRORSTATE_73_80:8;					//	73...80
	uint8_t ERRORSTATE_81_88:8;					//	81...88
	uint8_t ERRORSTATE_89_96:8;					//	89...96
	//---
	uint8_t ERRORSTATE_97:1;					//	97
	uint8_t ERRORSTATE_98:1;					//	98
	uint8_t ERRORSTATE_99:1;					//	99
	uint8_t ERRORSTATE_100:1;					//	100
	uint8_t ERRORSTATE_DOOR_OPENED_EVENT:1;		//	101	// Событие открытия двери
	uint8_t ERRORSTATE_DOOR_CLOSED_EVENT:1;		//	102	// Событие закрытия двери
	uint8_t ERRORSTATE_103:1;					//	103
	uint8_t ERRORSTATE_104:1;					//	104
	//---
	uint8_t ERRORSTATE_105:1;					//	105
	uint8_t ERRORSTATE_106:1;					//	106
	uint8_t ERRORSTATE_107:1;					//	107
	uint8_t ERRORSTATE_108:1;					//	108
	uint8_t ERRORSTATE_109:1;					//	109
	uint8_t ERRORSTATE_110:1;					//	110
	uint8_t ERRORSTATE_POWER_ON_EVENT:1;		//	111	// Включение автомата
	uint8_t ERRORSTATE_POWER_OFF_EVENT:1;		//	112	// Выключение автомата (записывается в память после включения и проверки времени последней записи в память)
	//---
	uint8_t ERRORSTATE_113_120:8;					//	113...120
	//---
	uint8_t ERRORSTATE_STAT_ENTER_EVENT:1;			//	121	// Событие входа в инкассацию
	uint8_t ERRORSTATE_SHORT_STAT_CLEAR_EVENT:1;	//	122	// Событие обнуления короткой бухгалтерии
	uint8_t ERRORSTATE_PRODUCTS_RELOAD_EVENT:1;		//	123	// Событие загрузка товаров
	uint8_t ERRORSTATE_124:1;						//	124
	uint8_t ERRORSTATE_125:1;						//	125
	uint8_t ERRORSTATE_126:1;						//	126
	uint8_t ERRORSTATE_127:1;						//	127
	uint8_t ERRORSTATE_128:1;						//	128
	//---
	uint8_t ERRORSTATE_129_136:8;					//	129...136
	uint8_t ERRORSTATE_137_144:8;					//	137...144
	uint8_t ERRORSTATE_145_152:8;					//	145...152
	uint8_t ERRORSTATE_153_160:8;					//	153...160
	uint8_t ERRORSTATE_161_168:8;					//	161...168
	uint8_t ERRORSTATE_169_176:8;					//	169...176
	uint8_t ERRORSTATE_177_184:8;					//	177...184
	uint8_t ERRORSTATE_185_192:8;					//	185...192
	uint8_t ERRORSTATE_193_200:8;					//	193...200
	uint8_t ERRORSTATE_201_208:8;					//	201...208
	uint8_t ERRORSTATE_209_216:8;					//	209...216
	uint8_t ERRORSTATE_217_224:8;					//	217...224
	uint8_t ERRORSTATE_225_232:8;					//	225...232
	uint8_t ERRORSTATE_233_240:8;					//	233...240
	uint8_t ERRORSTATE_241_248:8;					//	241...248
	uint8_t ERRORSTATE_249_256:8;					//	249...256
}Errors_state_t;

/*
// Отправлять СМС при аварии
		uint16_t Report_encashment_SMS_Enable:1;				// Отправлять СМС при инкассации
		uint16_t Report_change_SMS_Enable:1;					// Отправлять СМС если нет сдачи
		uint16_t Report_low_balance_SMS_Enable:1;				// Отправлять СМС при низком остатке
		uint16_t Report_charging_SMS_Enable:1;					// Отправлять СМС при загрузке товара
		uint16_t Report_coinbox_full_SMS_Enable:1;				// Отправлять СМС при переполнении денежного бокса
		uint16_t Report_bill_full_SMS_Enable:1;					// Отправлять СМС при заполняющемся банкнотоприёмнике
		uint16_t Report_power_on_SMS_Enable:1;					// Отправлять СМС при включении автомата
		uint16_t Report_power_off_SMS_Enable:1;					// Отправлять СМС при выключении автомата
		uint16_t Report_door_open_SMS_Enable:1;					// Отправлять СМС при открытии двери
		uint16_t Report_door_close_SMS_Enable:1;				// Отправлять СМС при закрытии двери
		uint16_t Report_dropout_overflow_SMS_Enable:1;		    // Отправлять СМС при переполнения слива
*/
								// и т.д.
//-------------------------------------------------------------------
//--------- Коды нкопок------------//
#define btnProduct1		0
#define btnProduct2		1
#define btnProduct3		2
#define btnProduct4		3
#define btnProduct5		4
#define btnProduct6		5
#define btnTest			8
#define btnService1		9
#define btnService2		10
#define btnService3		11
#define btnDoorSwitch	12

#define  WHITE_COLOR	0
#define  RED_COLOR		1

//--------------------Структура идентификатора автомата-------------------------//
typedef struct
{
	uint8_t MachineType [10];				// Модель автомата
	uint8_t SerialNumber[10];				// Серийный номер автомата
}MachineID_t;
//------------------------------------------------------------------------------//

//--------------------Структура данных, в которой хранится вся информация об автомате-----------------------------------//
typedef struct  
{
	// Общие настройки
	struct  
	{
		uint8_t CurrencyName [3];				// Название валюты, в которой ведётся продажа (например грн)
		uint8_t LanguageOfMenu;					// Язык меню в автомате (0-русский, 1-украинский, 3-английский, 4-французский, 5-немецкий, 6-испанский, 7-итальянский, 8-белорусский)
	
		uint8_t SyrupName[5][16];				// Названия сиропов (Не путать с названиями товаров!!! Товары могут иметь от 0 до 2-х сиропов, при этом могут не совпадать номера товаров с номерами сиропов!!!)
		
		uint8_t WaterLeftoverOffEnable:1;		// Включение контроля за количеством воды (0 - нет контроля: не посылается отчёт о заканчивающихся компонентах, автомат не отключается при закончившемся компоненте(не считается расход); 1 - ведётся учёт, при определённом количестве посылается отчёт, при закончившемся компоненте - отключается товар или весь автомат)
		uint8_t SirupLeftoverOffEnable:1;		// Включение контроля за количеством сиропа (0 - нет контроля: не посылается отчёт о заканчивающихся компонентах, автомат не отключается при закончившемся компоненте(не считается расход); 1 - ведётся учёт, при определённом количестве посылается отчёт, при закончившемся компоненте - отключается товар или весь автомат)
		uint8_t CupLeftoverOffEnable:1;			// Включение контроля за количеством стаканов (0 - нет контроля: не посылается отчёт о заканчивающихся компонентах, автомат не отключается при закончившемся компоненте(не считается расход); 1 - ведётся учёт, при определённом количестве посылается отчёт, при закончившемся компоненте - отключается товар или весь автомат)
		uint8_t LightBoxTimeControlEnable:1;	// Включение расписания работы лайтбоксов
		uint8_t CashBoxFullOffEnable:1;			// Включение контроля за количеством купюр в кешбоксе---!!!!!!!!!!!!!!----Сообщить Диме об внесённом изменении!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		uint8_t LightBoxreserved:3;				//---------------------Reserved
		
		uint8_t LightBoxTimeOnDay[2];			// Время включения подсветки лайтбоксов (утром)
		uint8_t LightBoxTimeOffDay[2];			// Время выключения подсветки лайтбоксов (утром)
		uint8_t LightBoxTimeOnEvening[2];		// Время включения подсветки лайтбоксов (вечером)
		uint8_t LightBoxTimeOffEvening[2];		// Время выключения подсветки лайтбоксов (вечером)
		
		uint8_t WaterReloadAmount;				// Объём воды после полной загрузки в л. (0-255л).
		uint16_t SirupReloadAmount;				// Количество сиропа после полной загрузки в мл. (0-65535 мл).
		uint16_t CupReloadAmount;				// Количество стаканов после полной загрузки, шт.
	
		uint8_t WaterLeftoverAmountAlarm;		// Объём остатка воды для посылки предупреждения в л. (0-255 л).
		uint16_t SirupLeftoverAmountAlarm;		// Количество остатка сиропа для посылки предупреждения в мм. (0-65535 мл).
		uint16_t CupLeftoverAmountAlarm;		// Количество остатка стаканов для посылки предупреждения, шт.
	
		uint8_t WaterLeftoverAmountOff;			// Объём воды для отключения автомата в л. (0-255л).
		uint16_t SirupLeftoverAmountOff;		// Количество сиропа для отключения продажи в мл. (0-65535 мл).
		uint16_t CupLeftoverAmountOff;			// Количество стаканов для отключения автомата, шт.
	
		uint8_t AutomateReserveBytes[10];		// Резервное место в структуре настроек (для будущего расширения функциональных возможностей)
	}Automate;
	
	// Настройки для каждого товара------------------------------
	struct  
	{
		uint8_t ProdName [16];			// Название товара (то, что будет писаться на этикетках возле кнопок и на индикаторе(если это будет в будущем необходимо))
		uint16_t ProdPrice;				// Цена товара (в копейках, центах и т.д.)
		uint8_t ProdEnableFlag:1;		// Флаг включения продукта (говорит о том, что товар вообще продаётся)
		uint8_t ProdSirupEnable:1;		// Флаг наличия в продукте сиропа
		uint8_t Prod2SirupsEnable:1;	// Флаг наличия в продукте 2-х сиропов (0 - нет 2-х сиропов, 1 - есть 2-й сироп)
		uint8_t ProdReserved:5;			//---------------------Reserved
		uint16_t ProdWaterAmount;		// Количество воды на стакан, мл
		uint8_t Prod1SirupID;			// Номер 1-го сиропа
		uint16_t Prod1SirupAmount;		// Количество 1-го сиропа на стакан в мл
		uint8_t Prod2SirupID;			// Номер 2-го сиропа
		uint16_t Prod2SirupAmount;		// Количество 2-го сиропа на стакан в мл
		uint8_t ProdReservedByte;		//---------------------Reserved
	}ProductSet[6];
	
	// Датчики
	struct  
	{
		uint16_t TrunkLineSpillBetweenTime;				// Время простоя для пролива, мин (в минутах)
		uint16_t TrunkLineSpillValveOpenTime;			// Время открытия клапана для пролива, мс (в миллисекундах)
		uint8_t TrunkLineSpillEnable:1;					// Проливать магистраль после простоя
		uint8_t WaterOverFlowSensorEnable:1;			// Использовать датчик перелива в сливной ёмкости
		uint8_t CupSensorEnable:1;						// Использовать датчик выдачи стаканов
		uint8_t WaterPumpDriveEnable:1;					// Включение управления насосом высокого давления (отталкиваясь от датчиков нижнего и верхнего уровня карбонизатора)
		uint8_t WaterFlowRateSensorEnable:1;			// Использовать датчик расхода воды. (Если нет, то расход вычисляется из величины расхода мл/мин)
		uint8_t SensReservedBits:3;						//---------------------Reserved
		uint16_t WaterFlowRateForTime;					// Расход воды по времени, если не используется датчик расхода воды мл/мин
		uint16_t WaterFlowRate;							// Импульсов датчика расхода на 1 л воды имп/л!!!!!!!
		uint8_t WaterFlowRateCorrection;				// Коррекция показаний датчика расхода жидкости из-за применения с газированной водой. В процентах 0-200 (с шагом 10%). для газированной воды показатель всегда будет < 100. По умолчанию 80.
		uint16_t SirupFlowRate;							// Расход сиропа  мл/мин.
		uint16_t WaterPumpSwitchOnMaxTime;				// Максимальное время работы насоса до срабатывания датчика верхнего уровня, в секундах.
		uint16_t WaterPumpAfterHighLevelSwitchOffTime;	// Время работы насоса после срабатывания датчика верхнего уровня, в секундах.
		uint8_t SensorsReservBytes[6];					//---------------------Reserved
	}Sensors;
	
	struct
	{
		uint8_t CupTubesAmount;					// Количество туб со стаканами
		uint8_t CupDropTime;					// Время падения стакана в с(секундах) (при включённом датчике выдачи стаканов, если за это время стакан не появился - выдать ошибку. При выключенном датчике - задержка перед наливом воды).
	}CupDisp;
	
	// Платёжная система
	// Банкнотоприёмник
	struct  
	{
		uint8_t Bill_model;						// Модель банкнотоприёмника (0 - CashCode, 1 - ...)
		uint8_t Bill_protocol;					// Протокол работы банкнотоприёмника (0 - pulse, 1 - MDB, 2 - ...)
		uint16_t Bill_capacity;					// Ёмкость банкнотоприёмника (количество купюр)
		uint16_t Bill_sens_ms;					// Длительность импульса в импульсном режиме
		uint16_t Bill_pause_ms;					// Длительность паузы в импульсном режиме
		uint8_t Bill_1_grn_pulseAmount;			// Количество импульсов на 1 грн.
		uint8_t Bill_fullAmountAlarm;			// Количество свободного места для купюр в процентах от общей ёмкости, когда нужно подать сигнал о заканчивающемся месте для купюр
		uint8_t bill_antifishing_Enable:1;		// Использовать антифишинг. Протокол PULSE
		uint8_t Bill_last_bill_return_Enable:1; // Разрешить возврат последней купюры
		uint8_t BillreservedBits:6;				//---------------------Reserved
	
		uint16_t Bill_1_value_Enable:1;		// Принимаемые купюры (1 грн.)
		uint16_t Bill_2_value_Enable:1;		//                    (2 грн.)          
		uint16_t Bill_3_value_Enable:1;		//                    (5 грн.) 
		uint16_t Bill_4_value_Enable:1;		//					  (10 грн.)
		uint16_t Bill_5_value_Enable:1;		//                    (20 грн.)
		uint16_t Bill_6_value_Enable:1;		//                    (50 грн.)
		uint16_t Bill_7_value_Enable:1;		//                    (100 грн.)
		uint16_t Bill_8_value_Enable:1;		//                    (200 грн.)
		uint16_t BillReservedBits2:8;		//---------------------Reserved
		
		uint8_t BillReserveBytes[5];		// Резервные байты для будущего расширения функциональных возможностей
	} Billacceptor;
	
	// Монетоприёмник
	struct  
	{
		uint8_t Coin_model;					 // Модель монетоприёмника (0 - G-46(NRI), 1 - ...)
		uint8_t Coin_protocol;				 // Протокол работы монетоприёмника (0 - pulse, 1 - MDB, 2 - ...)
		uint16_t Coin_capacity;				 // Ёмкость бокса монетоприёмника
		uint16_t Coin_sens_ms;				 // Длительность импульса в импульсном режиме, мс
		uint16_t Coin_pause_ms;				 // Длительность паузы в импульсном режиме, мс
		uint8_t Coin_1_grn_pulseAmount;		 // Количество импульсов на 1 грн.
	
		uint8_t Coin_rest_coin_control:1;	 // Остатки монет в тубах определяет (0 - контроллер, 1 - монетоприёмник)
		uint8_t Coin_MDB_reserv:7;			 // Зарезервированные биты
	
		uint8_t Coin_accept_coin_1_Enable:1; // Принимать монеты 1-го номинала
		uint8_t Coin_accept_coin_2_Enable:1; // Принимать монеты 2-го номинала
		uint8_t Coin_accept_coin_3_Enable:1; // Принимать монеты 3-го номинала
		uint8_t Coin_accept_coin_4_Enable:1; // Принимать монеты 4-го номинала
		uint8_t Coin_accept_coin_5_Enable:1; // Принимать монеты 5-го номинала
		uint8_t Coin_accept_coin_6_Enable:1; // Принимать монеты 6-го номинала
		uint8_t Coin_accept_coin_7_Enable:1; // Резерв
		uint8_t Coin_accept_coin_8_Enable:1; // Резерв
	
		uint8_t Coin_payout_coin_1_Enable:1; // Выдавать монеты 1-го номинала
		uint8_t Coin_payout_coin_2_Enable:1; // Выдавать монеты 2-го номинала
		uint8_t Coin_payout_coin_3_Enable:1; // Выдавать монеты 3-го номинала
		uint8_t Coin_payout_coin_4_Enable:1; // Выдавать монеты 4-го номинала
		uint8_t Coin_payout_coin_5_Enable:1; // Выдавать монеты 5-го номинала
		uint8_t Coin_payout_coin_6_Enable:1; // Выдавать монеты 6-го номинала
		uint8_t Coin_payout_coin_7_Enable:1; // Резерв
		uint8_t Coin_payout_coin_8_Enable:1; // Резерв
	
		uint8_t Coin_1_tube_max_coin_Amount; // Максимальное количество монет 1-й тубы
		uint8_t Coin_2_tube_max_coin_Amount; // Максимальное количество монет 2-й тубы
		uint8_t Coin_3_tube_max_coin_Amount; // Максимальное количество монет 3-й тубы
		uint8_t Coin_4_tube_max_coin_Amount; // Максимальное количество монет 4-й тубы
		uint8_t Coin_5_tube_max_coin_Amount; // Максимальное количество монет 5-й тубы
		uint8_t Coin_6_tube_max_coin_Amount; // Максимальное количество монет 6-й тубы
		uint8_t Coin_7_tube_max_coin_Amount; // Резерв
		uint8_t Coin_8_tube_max_coin_Amount; // Резерв
	
		uint8_t Coin_1_tube_min_coin_Amount; // Минимальное количество монет 1-й тубы
		uint8_t Coin_2_tube_min_coin_Amount; // Минимальное количество монет 2-й тубы
		uint8_t Coin_3_tube_min_coin_Amount; // Минимальное количество монет 3-й тубы
		uint8_t Coin_4_tube_min_coin_Amount; // Минимальное количество монет 4-й тубы
		uint8_t Coin_5_tube_min_coin_Amount; // Минимальное количество монет 5-й тубы
		uint8_t Coin_6_tube_min_coin_Amount; // Минимальное количество монет 6-й тубы
		uint8_t Coin_7_tube_min_coin_Amount; // Резерв
		uint8_t Coin_8_tube_min_coin_Amount; // Резерв
		
		uint8_t CoinReserveBytes[10];		// Резервные байты для будущего расширения функциональных возможностей
	} Coinacceptor;
	
	// Настройка отчётов
	struct  
	{
		uint8_t Report_enable:1;								// Включить отправку отчётов
		uint8_t Report_time_table_SMS_Enable:1;					// Отправлять СМС по расписанию
		uint8_t Report_send_by_request_SMS_Enable:1;		    // Отправлять СМС по запросу
		uint8_t Report_request_authorization_SMS_Enable:1;		// Выполнять авторизацию запроса (проверять номер телефона с запросом или отвечать на запрос с любого телефона)
		uint8_t Report_sending_show_SMS_Enable:1;				// Показывать на индикаторе процесс отправки СМС
		uint8_t Report_ReservedBits1:3;							//---------------------Reserved
		
		uint8_t Report_time[2];								    // Время отправки отчёта: часы, минуты (если включена отправка по расписанию)
		
		uint8_t Report_type_SMS;								// Тип отчёта: 0 - СМС, 1 - GPRS E-MAIL и т.д.
		
		uint16_t Report_accident_SMS_Enable:1;					// Отправлять СМС при аварии
		uint16_t Report_encashment_SMS_Enable:1;				// Отправлять СМС при инкассации
		uint16_t Report_change_SMS_Enable:1;					// Отправлять СМС если нет сдачи
		uint16_t Report_low_balance_SMS_Enable:1;				// Отправлять СМС при низком остатке
		uint16_t Report_charging_SMS_Enable:1;					// Отправлять СМС при загрузке товара
		uint16_t Report_coinbox_full_SMS_Enable:1;				// Отправлять СМС при переполнении денежного бокса
		uint16_t Report_bill_full_SMS_Enable:1;					// Отправлять СМС при заполняющемся банкнотоприёмнике
		uint16_t Report_power_on_SMS_Enable:1;					// Отправлять СМС при включении автомата
		uint16_t Report_power_off_SMS_Enable:1;					// Отправлять СМС при выключении автомата
		uint16_t Report_door_open_SMS_Enable:1;					// Отправлять СМС при открытии двери
		uint16_t Report_door_close_SMS_Enable:1;				// Отправлять СМС при закрытии двери
		uint16_t Report_dropout_overflow_SMS_Enable:1;		    // Отправлять СМС при переполнения слива
		uint16_t Report_ReservedBits2:4;						//---------------------Reserved
		
		uint8_t Report_number_SMS[15];							// Номер телефона, на который отправлять СМС
		uint8_t Report_request_number_SMS[15];					// Номер телефона для запросов отчётов
		
		uint8_t Report_balance_request_USSD[8];					// Строка USSD запроса баланса на счету
		
		// Настройки GPRS-подключения
		uint8_t Report_GPRS_user[20];							// Пользователь
		uint8_t Report_GPRS_password[20];						// Пароль
		uint8_t Report_GPRS_access_point[35];					// Точка доступа
		uint8_t Report_GPRS_DNS1[4];							// DNS1
		uint8_t Report_GPRS_DNS2[4];							// DNS2
		
		uint8_t Report_GPRS_password_request:1;					// Запрос пароля
		uint8_t Report_GPRS_ReservedBits:7;						//---------------------Reserved
		
		// Настройки SMTP
		uint8_t Report_SMTP_server[35];							// SMTP
		uint8_t Report_SMTP_user[20];							// Пользователь
		uint8_t Report_SMTP_password[20];						// Пароль
		uint8_t Report_SMTP_email[35];							// Адрес получателя
		uint8_t Report_SMTP_return_email[35];					// Обратный адрес
		uint8_t Report_SMTP_subject_email[15];					// Тема письма
		
		uint8_t ReportReserveBytes[10];							//---------------------Reserved
	}Reports;
	
}Settings_t;
//======================================================================================================================//


//-------------------Статистика автомата--------------------------------------------------------------------------------//
typedef struct  
{
	uint32_t CupsSold;					// Количество продаж (проданных стаканов)
	uint32_t MoneyGet;					// Всего заработано денег (в копейках)
	uint32_t CashGet;					// Принято денег купюрами (в копейках)
	uint32_t CoinGet;					// Принято денег мелочью (в копейках)
	uint32_t CoinPayOut;				// Выдано сдачи (в копейках)
	
	uint32_t WaterSold;					// Объём потраченной воды в мл (в миллилитрах)
	uint32_t SyrupSold[5];				// Объём потраченного сиропа (в миллилитрах)
	
	uint32_t ProductSoldByTime[12];		// Количество продаж, в зависимости от времени суток. [0]: 00-02ч, [1] 02-04ч и т.д.
	uint32_t ProductSoldByType[6];		// Количество продаж по видам напитков (0 - 5 , имеется ввиду кнопки выбора напитка 1 -6)
	
	uint16_t StatReserveBytes[6];		// Резервные байты для будущего расширения функциональных возможностей
}Stat_automate_t;
//----------------------------------------------------------------------------------------------------------------------//


#define Product1 0
#define Product2 1
#define Product3 2
#define Product4 3
#define Product5 4
#define Product6 5


//-------------- Структура для данных времени--------------------------//


typedef struct 
{
  unsigned char SEC;
  unsigned char MIN;
  unsigned char HOUR;
  unsigned char DATE;
  unsigned char MONTH;
  unsigned char YEAR;
}RTC_Dallas_t;
//------------------------------------------------------------------//


typedef struct
{
	uint32_t Money_balance;			// Сумма принятых денег (баланс: сумма принятых - сумма выданной сдачи)т.е. та сумма, которая висит на экране в качестве принятых денег, коп.
	uint16_t Bill_banknote_amount;	// Количество банкнот в купюроприёмнике, шт.
	uint16_t CashBoxCoins_amount;	// Количество монет в CASH BOX
	uint32_t Water_leftover;		// Остаток воды, мл
	uint16_t Cups_leftover;			// остаток стаканов, шт.
	uint16_t Syrup_leftover[5];		// Остаток сиропов, мл
}Balance_t;
//-------------------------------------------------------------------//


typedef struct
{
	uint8_t LS_DataSet_is_ok:1;		// Загрузка настроек автомата прошла успешно
	uint8_t LS_LongStat_is_ok:1;
	uint8_t LS_ShortStat_is_ok:1;
	uint8_t LS_Balance_is_ok:1;
	uint8_t LS_ErrorsState_is_ok:1;
	uint8_t QC_QueuesCreate_is_ok:1;	// Создание очередей прошло успешно
}LoadingStatus_t;
//------------------------------------------------------------------//



// Очередь для передачи в программу информации об источнике поступления денег и сумме
typedef struct	// Структура, которая будет элементом очереди
{
	uint16_t MoneyInValue; // Сумма принятых денег, коп.
	uint8_t MoneyInSource; // Источник принятия денег (1-банкнотоприёмник, 2-монетоприёмник)
}xMoneyIn;

// Очередь для передачи в задачу работы с монетником информации о типе и сумме  монет, которые необходимо выдать
#define COINS_DEPOSITE_ENABLE	250	//	Разрешить приём монет (каких именно указывается в MoneyOutValue - побитно)
#define COINS_DEPOSITE_DISABLE	251	//	Запретить приём монет (каких именно указывается в MoneyOutValue - побитно)
#define COINS_DISPENSE_ENABLE	252	//	Разрешить выдачу монет (каких именно указывается в MoneyOutValue - побитно)
#define COINS_DISPENSE_DISABLE	253	//	Запретить выдачу монет (каких именно указывается в MoneyOutValue - побитно) ?????????????? дублируется
#define COIN_TYPE_ANY			240	//	Тип выдаваемых монет
#define BILLS_DEPOSITE_ENABLE	241	//	Разрешить приём купюр
#define BILLS_DEPOSITE_DISABLE	242	//	Запретить приём купюр

typedef struct	// Структура, которая будет элементом очереди
{
	uint8_t CommandTyte;	// Команда
	uint16_t ServiceInfo;	// Вспомогательная информация
}xBill_comm_t;

typedef struct	// Структура, которая будет элементом очереди
{
	uint16_t MoneyOutValue; // Сумма денег для выдачи, коп.
	uint8_t CommandTyte; // Тип монет (если будет реализована такая возможность) (а также команды монетнику)
}xMoneyOut_t;
// Очередь информации от монетника о выдаче монет-----
typedef struct	// Структура, которая будет элементом очереди
{
	uint16_t MoneyOutValue;
	uint8_t DispenseCoinsEnded;	// Флаг того, что выдача сдачи закончена
}xMoneyOutReport_t;	
//------------------------------------------------------------------//
// Очередь для передачи в программу информации нажатии и отпускании кнопок
typedef struct	// Структура, которая будет элементом очереди
{
	uint8_t BtnName;		// Номер кнопки
	uint8_t BtnEvent;		// Событие кнопки (1-нажата, 0-отпущена)
}xBtnEvent_t;
//------------------------------------------------------------------//
typedef struct
{
	//------24V
	uint16_t Exe_unit_syrup1:1;
	uint16_t Exe_unit_syrup2:1;
	uint16_t Exe_unit_syrup3:1;
	uint16_t Exe_unit_syrup4:1;
	uint16_t Exe_unit_syrup5:1;
	uint16_t Exe_unit_res1:1;
	uint16_t Exe_unit_res2:1;
	uint16_t Exe_unit_res3:1;
	//------12V
	uint16_t Exe_unit_lightbox:1;
	uint16_t Exe_unit_adv_lightbox:1;
	uint16_t Exe_unit_res4:1;
	uint16_t Exe_unit_res5:1;
	//------220V
	uint16_t Exe_unit_220v_water_pump:1;
	uint16_t Exe_unit_220v_water_valve:1;
	uint16_t Exe_unit_220v_fun:1;
	uint16_t Exe_unit_res6:1;

}Execution_units_t;
//-------------------------------------------------------------------//



typedef struct
{
	uint8_t Lght_btn1:1;
	uint8_t Lght_btn2:1;
	uint8_t Lght_btn3:1;
	uint8_t Lght_btn4:1;
	uint8_t Lght_btn5:1;
	uint8_t Lght_btn6:1;
	uint8_t Lght_red:1;
	uint8_t Lght_white:1;
}Lights_t;
//--------------------------------------------------------------------//



typedef struct
{
	uint16_t Btn1:1;	// Кнопка 1
	uint16_t Btn2:1;	// Кнопка 2
	uint16_t Btn3:1;	// Кнопка 3
	uint16_t Btn4:1;	// Кнопка 4
	uint16_t Btn5:1;	// Кнопка 5
	uint16_t Btn6:1;	// Кнопка 6
	uint16_t Btnres:2;	// Зарезервировано
	//------------------
	uint16_t Btn_test:1;			// Кнопка TECT
	uint16_t Btn_service1:1;		// Кнопка Сервис 1
	uint16_t Btn_service2:1;		// Кнопка Сервис 2
	uint16_t Btn_service3:1;		// Кнопка Сервис 3
	uint16_t Btn_serv_reserve:3;	// Зарезервировано
	uint16_t Btn_door_sw:1;			// Кнопка двери
}Buttons_t;
//-------------------------------------------------------------------//


typedef struct
{
	uint8_t ProdInStock[6];			// Флаг разрешения продажи (говорит о том, разрешена ли продажа товара в данный момент(может быть запрещена, например из-за малого остатка))
}ProdSellEnable_t;
//--------------------------------------------------------------------//

/*
typedef struct
{
	uint8_t	TE_ADCCheckerTask:1;
	uint8_t	TE_BillTask:1;
	uint8_t TE_ButtonsScanTask:1;
	uint8_t	TE_CupDispenserTasc:1;
	uint8_t TE_LCDTask:1;
	uint8_t TE_MainTask:1;
	uint8_t TE_PowerDriveSPITask:1;
	uint8_t TE_TimeControlTask:1;
	uint8_t TE_WaterPumpTask:1;
	uint8_t TE_WaterSyrupDispenseTask:1;
}Task_enabling_t;
*/

typedef struct
	{
		uint8_t LoadingState_ExeFlag:1;
		uint8_t WaitMoneyState_ExeFlag:1;
		uint8_t GiveCupState_ExeFlag:1;
		uint8_t GiveDrinkingState_ExeFlag:1;
		uint8_t GiveChangeState_ExeFlag:1;
		uint8_t TestState_ExeFlag:1;
	}State_switcher_flags_t;



//------------- Структура записи события в лог событий.(Одна запись - 9 байт)-----//
typedef struct  
{
	uint8_t EventCode;			// Код события
	uint16_t EventServiceInfo;	// Дополнительная сервисная информация события
	struct
	{
		unsigned char SEC;
		unsigned char MIN;
		unsigned char HOUR;
		unsigned char DATE;
		unsigned char MONTH;
		unsigned char YEAR;
	}DateTime;
}Event_log_t;
//-------------------------------------------------------------------------------//


typedef struct  
{
	uint8_t BeeperOn_flag:1;		// Устанавливается программой, когда нужно подать звук. Сбрасывается в подпрограмме работы со звуком при первом входе в обработку звука.
	uint8_t BeeperEnabled_flag:1;	// Устанавливается подпрограммой работы со звуком. Говорит о том, что в данный момент идёт генерация звука
	uint8_t BeeperMode;				// Режим звука (протисывается дефайнами). Устанавливается программой вместе с BeeperOn_flag.
	uint8_t BeeperCycleNumber;		// Номер цикла
	uint16_t BeeperSignalCounter;	// Счётчик длительности сигнала
	uint16_t BeeperPauseCounter;	// Счётчик длительности паузы
}Beeper_mode_t;
//--------------------------------------------------------------------------------//






//-------------Данные для работы с монетником----------------------//
typedef struct
{
	uint8_t FeatureLevel;
	uint8_t CurrencyCode[2];
	uint8_t ScalingFactor;
	uint8_t DecimalPlaces;
	uint16_t CoinTypeRouting;
	uint8_t CoinTypeCredit[16];
}Changer_setup_t;

typedef struct
{
	uint8_t TubeFullStatus[2];
	uint8_t TubeStatus[16];
}Tube_status_t;

//--------------Данные для работы с банкнотоприёмником по MDB-----//
typedef struct
{
	uint8_t FeatureLevel;
	uint8_t CurrencyCode[2];
	uint16_t ScalingFactor;
	uint8_t DecimalPlaces;
	uint16_t StackerCapacity;
	uint16_t BillSecurityLevel;
	uint8_t Escrow;
	uint8_t BillTypeCredit[16];
}Bill_setup_t;	
//--------------------------------------------------------------------------------//
#endif /* SET_H_ */