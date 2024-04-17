import pandas as pd
import sympy

# Generate the first 1000 prime numbers
prime_list = [sympy.prime(i) for i in range(1, 1001)]

# Create a DataFrame with numbers 1 to 1000
df = pd.DataFrame({'Number': range(1, 1001)})

# Function to highlight primes in the DataFrame
def highlight_primes(val):
    color = 'yellow' if val in prime_list else ''
    return f'background-color: {color}'

# Apply the highlighting function to the DataFrame using Styler.map
styled_df = df.style.map(highlight_primes, subset=['Number'])
styled_df
