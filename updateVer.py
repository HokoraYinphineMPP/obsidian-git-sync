from mkdocs.plugins import BasePlugin
import requests

class MyPlugin(BasePlugin):
    def on_pre_build(self, config):
        # Make an API call to the GitHub API to get information about release assets
        response = requests.get('https://api.github.com/repos/owner/repository/releases/latest')
        data = response.json()
        # Extract the dynamic part of the asset name
        for asset in data['assets']:
            if asset['name'].startswith('revanced-manager') and asset['name'].endswith('.apk'):
                self.dynamic_part = asset['name'][len('revanced-manager'):-len('.apk')]
                break

    def on_page_context(self, context, page, config, nav):
        # Pass the dynamic part of the asset name to the Jinja template
        context['dynamic_part'] = self.dynamic_part