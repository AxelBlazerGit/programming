import pandas as pd
import matplotlib.pyplot as plt

# Assuming you have a CSV file with weather data
file_path = 'todatetime.csv'
weather_data = pd.read_csv(file_path)

# Explore the data
print(weather_data.head())

# Example: Plotting temperature over time
weather_data['Date'] = pd.to_datetime(weather_data['Date'])
plt.plot(weather_data['Date'], weather_data['Temperature'])
plt.title('Temperature Over Time')
plt.xlabel('Date')
plt.ylabel('Temperature (Celsius)')
plt.show()
