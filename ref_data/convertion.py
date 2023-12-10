import pandas as pd

def convert_mem_to_excel(mem_file, excel_file):
    # Read the contents of the .mem file
    with open(mem_file, 'r') as file:
        data = file.read()

    # Split the data into words separated by spaces or newlines
    words = data.replace('\n', ' ').split()

    # Convert hexadecimal values to decimal
    decimal_values = [int(word, 16) for word in words]

    # Create a DataFrame from the list of decimal values
    df = pd.DataFrame({'Data': decimal_values})

    # Write the DataFrame to an Excel file
    df.to_excel(excel_file, index=False)

# Example usage
convert_mem_to_excel('sine.mem', 'sine.xlsx')

# Note: You need to have the pandas library installed to use this code.
# Also, the 'sine.mem' file should exist in the same directory as your script, or provide the full path.
