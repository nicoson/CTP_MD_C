CREATE TABLE test(
id INT(11) NOT NULL PRIMARY KEY auto_increment,
name VARCHAR(50), 
dept VARCHAR(25), 
birth DATE,
age INT(3) CHECK(age >=0 AND age <=100)
)ENGINE=INNODB DEFAULT CHARSET=utf8;


CREATE TABLE IF NOT EXISTS market(
	#primary key
	pid INT(11) NOT NULL PRIMARY KEY auto_increment,
	#交易日
	TradingDay DATE,
	#合约代码
	InstrumentID VARCHAR(31),
	#交易所代码
	ExchangeID VARCHAR(9),
	#合约在交易所的代码
	ExchangeInstID VARCHAR(31),
	#最新价
	LastPrice DECIMAL(16,2),
	#上次结算价
	PreSettlementPrice DECIMAL(16,2),
	#昨收盘
	PreClosePrice DECIMAL(16,2),
	#昨持仓量
	PreOpenInterest DECIMAL(16,2),
	#今开盘
	OpenPrice DECIMAL(16,2),
	#最高价
	HighestPrice DECIMAL(16,2),
	#最低价
	LowestPrice DECIMAL(16,2),
	#数量
	Volume INT(11),
	#成交金额
	Turnover DECIMAL(16,2),
	#持仓量
	OpenInterest DECIMAL(16,2),
	#今收盘
	ClosePrice DECIMAL(16,2),
	#本次结算价
	SettlementPrice DECIMAL(16,2),
	#涨停板价
	UpperLimitPrice DECIMAL(16,2),
	#跌停板价
	LowerLimitPrice DECIMAL(16,2),
	#昨虚实度
	PreDelta DECIMAL(16,2),
	#今虚实度
	CurrDelta DECIMAL(16,2),
	#最后修改时间
	UpdateTime VARCHAR(9),
	#最后修改毫秒
	UpdateMillisec INT(11),
	#申买价一
	BidPrice1 DECIMAL(16,2),
	#申买量一
	BidVolume1 INT(11),
	#申卖价一
	AskPrice1 DECIMAL(16,2),
	#申卖量一
	AskVolume1 INT(11),
	#申买价二
	BidPrice2 DECIMAL(16,2),
	#申买量二
	BidVolume2 INT(11),
	#申卖价二
	AskPrice2 DECIMAL(16,2),
	#申卖量二
	AskVolume2 INT(11),
	#申买价三
	BidPrice3 DECIMAL(16,2),
	#申买量三
	BidVolume3 INT(11),
	#申卖价三
	AskPrice3 DECIMAL(16,2),
	#申卖量三
	AskVolume3 INT(11),
	#申买价四
	BidPrice4 DECIMAL(16,2),
	#申买量四
	BidVolume4 INT(11),
	#申卖价四
	AskPrice4 DECIMAL(16,2),
	#申卖量四
	AskVolume4 INT(11),
	#申买价五
	BidPrice5 DECIMAL(16,2),
	#申买量五
	BidVolume5 INT(11),
	#申卖价五
	AskPrice5 DECIMAL(16,2),
	#申卖量五
	AskVolume5 INT(11),
	#当日均价
	AveragePrice DECIMAL(16,2),
	#业务日期
	ActionDay DATE
)ENGINE=INNODB DEFAULT CHARSET=utf8;



CREATE TABLE IF NOT EXISTS InstrumentList(
	#primary key
	pid INT(11) NOT NULL PRIMARY KEY auto_increment,
	#合约代码
	InstrumentID VARCHAR(31)
)ENGINE=INNODB DEFAULT CHARSET=utf8;