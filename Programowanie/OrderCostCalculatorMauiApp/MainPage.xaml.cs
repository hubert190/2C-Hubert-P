namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {


        private string productName;
        public string ProductName
        {
            get { return productName; }
            set
            {
                productName = value;
                OnPropertyChanged();
            }
        }

        private int productPrice;
        public int ProductPrice
        {
            get { return productPrice; }
            set
            {
                productPrice = value;
                OnPropertyChanged();
            }
        }

        private int quantity;
        public int Quantity
        {
            get { return quantity; }
            set
            {
                quantity = value;
                OnPropertyChanged();
            }
        }

        private bool expressDelivery;
        public bool ExpressDelivery
        {
            get { return expressDelivery; }
            set
            {
                expressDelivery = value;
                OnPropertyChanged();
            }
        }

        private string summary;
        public string Summary
        {
            get { return summary; }
            set
            {
                summary = value;
                OnPropertyChanged();
            }
        }

        private string selectedDelivery;
        public string SelectedDelivery
        {
            get { return selectedDelivery; }
            set
            {
                selectedDelivery = value;
                OnPropertyChanged();
            }
        }

        private Command calculateOrder;
        public Command CalculateOrder
        {
            get
            {
                if (calculateOrder == null)
                {
                    calculateOrder = new Command(() => { CalculateCost(); });
                }
                return calculateOrder;
            }
        }

        public string[]
           Delivery
        { get; set; }

        public MainPage()
        {
            Quantity = 1;
            ExpressDelivery = false;
            Delivery = new string[]
            {
                "Odbiór osobisty",
                "Kurier",
                "Paczkomat"
            };
            SelectedDelivery = Delivery[0];

            InitializeComponent();
        }

        void CalculateCost()
        {
            double DeliveryPrice = 0;

            switch (Delivery)
            {
                case "Odbiór osobisty":
                    DeliveryPrice = 0; break;
                case "Kurier":
                    DeliveryPrice = 300; break;
                case "Paczkomat":
                    DeliveryPrice = 500; break;
            }

            double totalCost = ProductPrice * Quantity;

            if(ExpressDelivery)
            {
                totalCost += 15;
            }

        Summary =
        $"Produkt: {ProductName}\n" +
        $"Cena za sztukę: {ProductPrice}zł \n" +
        $"Liczba sztuk: {Quantity} \n" +
        $"Dostawa ekspresowa: {(ExpressDelivery ? "TAK" : "NIE")} \n" +
        $"Wynik: {totalCost}zł \n";
        }
    }
}
