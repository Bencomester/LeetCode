SELECT stock_name, SUM(IF(operation = "Sell", price, 0)) - SUM(IF(operation = "Buy", price, 0)) capital_gain_loss
FROM Stocks
GROUP BY 1;
