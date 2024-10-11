//Prompting user to enter Customer ID, Customer Name, and Units Consumed
#include <stdio.h>
{
customer_id = input(" ID:,");
customer_name = input("Name:,");
units_consumed = int(input("Units Consumed:,");

charges_per_unit = 0;
if units_consumed < 200
    charges_per_unit = 1.50
elif units_consumed >= 200 and units_consumed < 400:
    charges_per_unit = 1.80
elif units_consumed >= 400 and units_consumed < 600:
    charges_per_unit = 2.00
else:
    charges_per_unit = 2.50

total_amount = units_consumed * charges_per_unit
if total_amount > 400:
    surcharge = total_amount * 0.15
    total_amount += surcharge
    {
print("Customer ID:", customer_id)
print("Customer Name:", customer_name)
print("Units Consumed:", units_consumed)
print("Charges per Unit (Ksh):", charges_per_unit)
print("Total Amount to Pay:", total_amount)

return  0;
}