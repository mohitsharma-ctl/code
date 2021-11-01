import pandas as pd
import talib as ta

df = pd.DataFrame(pd.Series([230.12, 230.13, 230.93, 231.23, 231.75, 231.89, 231.51, 231.18, 230.75, 231.2]), columns=['close'])

print(ta.EMA(df.close.values, timeperiod=5))