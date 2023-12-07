import pandas as pd

def convert_mem_to_excel(mem_file, excel_file):
    # Read the contents of the .mem file
    with open(mem_file, 'r') as file:
        data = file.read()

    # Split the data into words separated by spaces or newlines
    words = data.replace('\n', ' ').split()

    # Create a DataFrame from the list of words
    df = pd.DataFrame(words, columns=['Data'])

    # Write the DataFrame to an Excel file
    df.to_excel(excel_file, index=False)

# Example usage
convert_mem_to_excel('sine.mem', 'sine.xlsx')
