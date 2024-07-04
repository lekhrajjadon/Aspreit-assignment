#Contect Details
#Name - Lekhraj jadon
#MBM University Jodhpur
#Passinate about Cloud and Security 
#Mob- 8619713106
#Email- lekhrajjadon12@gamil.com
#Aspreit-assignment
#Create A Cluster

eksctl create cluster --name my-aspreit-cluster --region ap-south-1 --fargate vim Dockerfile

Build Docker Image form Dockerfile docker build -t dsa-tree-image .

#run the image and get the execute the code #docker run -p 8080:8080 dsa-tree-image #Maximum Path Sum: 6 // right answer

#PS C:\Users\hp\OneDrive\Desktop\Aspreit> vim deployment.yaml #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f deployment.yaml

#PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano deployment.yaml #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f deployment.yaml #deployment.apps/dsa-tree-deployment created

#PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano service.yaml #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f service.yaml #service/dsa-tree-service created

#PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get deployments NAME READY UP-TO-DATE AVAILABLE AGE dsa-tree-deployment 0/3 3 0 2m22s #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get services NAME TYPE CLUSTER-IP EXTERNAL-IP PORT(S) AGE dsa-tree-service LoadBalancer 10.100.201.238 a4a9b702f12d44527ae61ee5700e1e91-1621647833.ap-south-1.elb.amazonaws.com 8080:30977/TCP 64s kubernetes ClusterIP 10.100.0.1 443/TCP 88m #PS C:\Users\hp\OneDrive\Desktop\Aspreit> nano ingress.yaml #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl apply -f ingress.yaml #ingress.networking.k8s.io/dsa-tree-ingress created #PS C:\Users\hp\OneDrive\Desktop\Aspreit> kubectl get ingress #NAME CLASS HOSTS ADDRESS PORTS AGE #dsa-tree-ingress lekhrajjadon12.com 80 22s

Update loacal host #PS C:\Users\hp\Onedrive\Desktop\Aspreit> cd C:\Windows\System32\drivers\etc
#PS C:\Windows\System32\drivers\etc> vim hosts #PS C:\Windows\System32\drivers\etc> ipconfig /flushdns

#Windows IP Configuration

#Successfully flushed the DNS Resolver Cache. #PS C:\Windows\System32\drivers\etc> kubectl get ingress NAME CLASS HOSTS ADDRESS PORTS AGE dsa-tree-ingress lekhrajjadon12.com 80 30m #PS C:\Windows\System32\drivers\etc> kubectl describe ingress dsa-tree-ingress #Name: dsa-tree-ingress Labels: Namespace: default Address: Ingress Class: Default backend: Rules: Host Path Backends

lekhrajjadon12.com / dsa-tree-service:8080 () Annotations: nginx.ingress.kubernetes.io/rewrite-target: / Events: #PS C:\Windows\System32\drivers\etc> cd C:\Users\hp\Onedrive\Desktop\Aspreit #PS C:\Users\hp\Onedrive\Desktop\Aspreit> kubectl delete ingress dsa-tree-ingress

GNU nano for Windows 64 bits, v7.2-22.1 2023.04.15 service.yaml
apiVersion: v1 kind: Service metadata: name: dsa-tree-service spec: selector: app: dsa-tree-app ports: - protocol: TCP port: 8080 targetPort: 8080 type: LoadBalancer

#GNU nano for Windows 64 bits, v7.2-22.1 2023.04.15 service.yaml apiVersion: v1 kind: Service

eksctl utils associate-iam-oidc-provider --cluster my-aspreit-cluster --approve
2024-07-04 09:40:35 [ℹ] will create IAM Open ID Connect provider for cluster "my-aspreit-cluster" in "ap-south-1" 2024-07-04 09:40:37 [✔] created IAM Open ID Connect provider for cluster "my-aspreit-cluster" in "ap-south-1" #PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano alb-ingress-policy.json #PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano trust-policy.json #PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> nano trust-policy.json

#helm repo add eks https://aws.github.io/eks-charts #"eks" already exists with the same configuration, skipping #PS C:\Users\hp\Onedrive\Desktop\Aspreit\my-app> helm upgrade -i aws-load-balancer-controller eks/aws-load-balancer-controller --namespace kube-system --set clusterName=my-aspreit-cluster --set serviceAccount.create=false --set serviceAccount.name=aws-load-balancer-controller --set region=ap-south-1 Release "aws-load-balancer-controller" has been upgraded. Happy Helming! #NAME: aws-load-balancer-controller #LAST DEPLOYED: Thu Jul 4 10:06:13 2024 #NAMESPACE: kube-system #STATUS: deployed #REVISION: 2 #TEST SUITE: None #NOTES: #AWS Load Balancer controller installed!

By using the load balancer and Ingress controleer i run my app outside the world

#EKS (Amazon Elastic Kubernetes Service):



#Managed Control Plane: EKS takes care of managing the Kubernetes control plane components, such as the API server, controller manager, and etcd. AWS handles upgrades, patches, and ensures high availability of the control plane.

#Automated Updates: EKS automatically updates the Kubernetes version, eliminating the need for manual intervention and ensuring that the cluster stays up-to-date with the latest features and security patches.

#Scalability: EKS can automatically scale the Kubernetes control plane based on demand, ensuring the cluster remains responsive as the workload increases.

#AWS Integration: EKS seamlessly integrates with various AWS services, such as AWS IAM for authentication and authorization, Amazon VPC for networking, and AWS Load Balancers for service exposure.

#Security and Compliance: EKS is designed to meet various security standards and compliance requirements, providing a secure and compliant environment for running containerized workloads.

#Monitoring and Logging: EKS integrates with AWS CloudWatch for monitoring cluster health and performance metrics, making it easier to track and troubleshoot issues.

#Ecosystem and Community: Being a managed service, EKS benefits from continuous improvement, support, and contributions from the broader Kubernetes community.

#Security Best Practices in AWS:
#Identity and Access Management (IAM):

#Implement least privilege access by assigning permissions based on roles.
#Use IAM policies to control access to AWS services and resources.
#Enable multi-factor authentication (MFA) for added security.
#Network Security:

#Utilize Virtual Private Cloud (VPC) to create isolated networks.
#Configure security groups and network access control lists (ACLs) to control inbound and outbound traffic.
#Use AWS WAF (Web Application Firewall) to protect against common web exploits.
#Data Encryption:

#E3ncrypt data at rest using AWS Key Management Service (KMS).
#Enable encryption in transit using SSL/TLS for communication between services.
#Monitoring and Logging:

#Set up AWS CloudTrail for auditing API calls and monitoring AWS account activity.
#Use Amazon CloudWatch for real-time monitoring of resources and applications.
#Implement logging with Amazon S3 and Amazon CloudWatch Logs for centralized log management.
#Cost Optimization in AWS:
#Resource Planning and Management:

#Right-size EC2 instances and use AWS Auto Scaling to match capacity with demand.
#Consider AWS Reserved Instances for predictable workloads to reduce costs.
#Use AWS Lambda for serverless computing to pay only for actual usage.
#Storage Optimization:

#Use Amazon S3 storage classes (Standard, Intelligent-Tiering, Glacier) based on data access patterns.
#Enable lifecycle policies to automatically transition or delete objects as they age.
Monitoring and Analysis:

#Utilize AWS Cost Explorer to analyze spending patterns and identify cost-saving opportunities.
#Implement AWS Budgets to set custom cost and usage budgets with alerts for proactive cost management.
#Architectural Best Practices:

#Leverage AWS Well-Architected Framework principles to design secure, high-performing, resilient, and efficient infrastructure.
#Consider serverless architectures (e.g., AWS Lambda, Amazon API Gateway) to reduce operational overhead and costs.









#AWS CloudWatch is a powerful monitoring and observability service provided by Amazon Web Services. It enables you to gain insights into the performance, health, and operational aspects of your AWS resources and applications. CloudWatch collects and tracks metrics, collects and monitors log files, and sets alarms to alert you on certain conditions.
#Comprehensive Monitoring: CloudWatch allows you to monitor various AWS resources such as EC2 instances, RDS databases, Lambda functions, and more. You get a unified view of your entire AWS infrastructure.

Real-Time Metrics: It provides real-time monitoring of metrics, allowing you to respond quickly to any issues or anomalies that might arise.

Automated Actions: With CloudWatch Alarms, you can set up automated actions like triggering an Auto Scaling group to scale in or out based on certain conditions.

Log Insights: CloudWatch Insights lets you analyze and search log data from various AWS services, making it easier to troubleshoot problems and identify trends.

Dashboards and Visualization: Create custom dashboards to visualize your application and infrastructure metrics in one place, making it easier to understand the overall health of your system.

