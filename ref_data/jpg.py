import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

def plot_pdf_from_excel_and_save(excel_file, output_file):
    # Load the data from the Excel file
    df = pd.read_excel(excel_file)

    # Assuming the relevant data is in the first column
    data = df.iloc[:, 0]

    # Plotting the Probability Density Function (PDF)
    sns.histplot(data, kde=True, stat="density", linewidth=0)
    plt.xlabel('Data Values')
    plt.ylabel('Density')
    plt.title('Probability Density Function of the Data')

    # Save the plot as a .jpg file
    plt.savefig(output_file, format='jpg', dpi=300)
    plt.close()

# Example usage (ensure the Excel file path and output file path are correct)
plot_pdf_from_excel_and_save('sine.xlsx', 'sine.jpg')

# Note: This code requires seaborn and matplotlib libraries to be installed. 
# The Excel file must contain numeric data and be correctly formatted.
