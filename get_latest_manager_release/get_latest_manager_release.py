from mkdocs.plugins import BasePlugin
import requests

class GetLatestManagerRelease(BasePlugin):
    def on_pre_build(self, config):
        # Make an API call to the GitHub API to get information about release assets
        response = requests.get('https://api.github.com/repos/revanced/revanced-manager/releases/latest')
        data = response.json()
        # Extract the dynamic part of the asset name
        for asset in data['assets']:
            if asset['name'].startswith('revanced-manager') and asset['name'].endswith('.apk'):
                dynamic_part = asset['name'][len('revanced-manager'):-len('.apk')]
                break
        # Generate the link to the latest release
        self.latest_release_link = f'https://github.com/revanced/revanced-manager/releases/latest/download/revanced-manager{dynamic_part}.apk'

    def on_page_markdown(self, markdown, page, config, files):
        # Inject the link to the latest release into the Markdown content
        markdown = markdown.replace('{{ latest_release_link }}', self.latest_release_link)
        return markdown

