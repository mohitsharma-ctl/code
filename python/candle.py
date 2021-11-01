import talib
import yfinance as yf
df = yf.download("SPY AAPL", start="2020-01-01", end="2020-02-28")
print(type(df))

# num = talib.CDL3BLACKCROWS(data['Open'].values, data['High'].values, data['Low'].values, data['Close'].values)

# integer = CDL2CROWS(open, high, low, close)
df = df.iloc[1:]
op = df['Open'].astype('float').values
cl=df['Close'].astype('float').values
lw=df['Low'].astype('float').values
hg=df['High'].astype('float').values

df['CDLDOJI'] = talib.CDLDOJI(op, hg , lw, cl)